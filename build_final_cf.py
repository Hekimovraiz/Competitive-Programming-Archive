
import os
import shutil
import re
import json

SRC = "/tmp/cf_solutions_final"
DEST_ROOT = "/home/lek/Documents/Competitive-Programming-Archive/CODEFORCES_SON"
JSON_PATH = "/home/lek/Documents/Competitive-Programming-Archive/My_CodeForces_SOlved_SOlutions.json"

if os.path.exists(DEST_ROOT):
    shutil.rmtree(DEST_ROOT)
os.makedirs(DEST_ROOT, exist_ok=True)

# 1. Load AC problems from JSON to have exact links and naming
with open(JSON_PATH, "r") as f:
    api_data = json.load(f)

ac_map = {} # prob_id -> {link, name}
for res in api_data['result']:
    if res.get('verdict') == 'OK':
        p = res['problem']
        cid = p.get('contestId')
        idx = p.get('index')
        if cid and idx:
            pid = f"{cid}{idx}"
            if cid >= 100000:
                link = f"https://codeforces.com/gym/{cid}/problem/{idx}"
            else:
                link = f"https://codeforces.com/contest/{cid}/problem/{idx}"
            ac_map[pid] = {
                "link": link,
                "name": p.get('name', ''),
                "cid": cid,
                "idx": idx
            }

total_processed = 0

# 2. Extract solutions from GitHub repo
# Folder structure: SRC/<contest_id>/<problem_folder>/solution.cpp
for contest_id in os.listdir(SRC):
    if contest_id == ".git": continue
    contest_path = os.path.join(SRC, contest_id)
    if not os.path.isdir(contest_path): continue
    
    for prob_folder in os.listdir(contest_path):
        prob_path = os.path.join(contest_path, prob_folder)
        if not os.path.isdir(prob_path): continue
        
        # Folder name is usually like "A - Theatre Square"
        # Extract letter
        match = re.search(r"^([A-Z][0-9]?)", prob_folder)
        if not match: continue
        
        prob_letter = match.group(1)
        prob_id = f"{contest_id}{prob_letter}"
        
        sol_file = os.path.join(prob_path, "solution.cpp")
        if not os.path.exists(sol_file):
            # Check for other extensions
            found = False
            for f in os.listdir(prob_path):
                if f.endswith(".cpp") or f.endswith(".py") or f.endswith(".java"):
                    sol_file = os.path.join(prob_path, f)
                    found = True
                    break
            if not found: continue

        # Get metadata from AC map if possible
        meta = ac_map.get(prob_id, {
            "link": f"https://codeforces.com/contest/{contest_id}/problem/{prob_letter}",
            "name": prob_folder,
            "cid": contest_id,
            "idx": prob_letter
        })

        ext = os.path.splitext(sol_file)[1]
        filename = f"problem{prob_id}{ext}"
        
        # Read code
        with open(sol_file, "r", errors="replace") as f:
            code = f.read()
        
        # Add Header
        header = f"/*\n * Problem: {prob_id} - {meta['name']}\n * Platform: Codeforces\n * Link: {meta['link']}\n */\n"
        if not code.strip().startswith("/*"):
            code = header + "\n" + code
            
        # Save to main folder
        dest_path = os.path.join(DEST_ROOT, filename)
        with open(dest_path, "w") as f:
            f.write(code)
            
        # Save to category folder
        cat_dir = os.path.join(DEST_ROOT, f"Solutions_for_{prob_letter[0]}")
        if not os.path.exists(cat_dir):
            os.makedirs(cat_dir)
        shutil.copy2(dest_path, os.path.join(cat_dir, filename))
        
        total_processed += 1

print(f"Built CODEFORCES_SON with {total_processed} solutions.")
