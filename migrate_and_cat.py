
import os
import re
import shutil

root_dir = "/home/lek/Documents/Competitive-Programming-Archive"
archive_dir = os.path.join(root_dir, "raizhekimov-ac")

platforms_map = {
    "Aizu": "Aizu",
    "AtCoder": "AtCoder",
    "CodeChef": "CodeChef",
    "CodeForces": "Codeforces",
    "CSAcademy": "CSAcademy",
    "CSES": "CSES",
    "DMOJ": "DMOJ",
    "EOlymp": "EOlymp",
    "HackerRank": "HackerRank",
    "QOJ": "QOJ",
    "SPOJ": "SPOJ",
    "USACO": "USACO",
    "UVA": "UVA",
    "VNOJ": "VNOJ",
    "Yosupo": "Yosupo",
    "Gym": "Codeforces" 
}

def get_link(platform, prob_id, arch_plat):
    if platform == "Codeforces":
        if arch_plat == "Gym":
            match = re.match(r"(\d+)([A-Z]\d?)", prob_id)
            if match:
                return f"https://codeforces.com/gym/{match.group(1)}/problem/{match.group(2)}"
            return f"https://codeforces.com/gym/{prob_id}"
        else:
            match = re.match(r"(\d+)([A-Z]\d?)", prob_id)
            if match:
                return f"https://codeforces.com/problemset/problem/{match.group(1)}/{match.group(2)}"
            return f"https://codeforces.com/problemset/problem/{prob_id}"
    elif platform == "EOlymp":
        return f"https://www.eolymp.com/en/problems/{prob_id}"
    elif platform == "CodeChef":
        return f"https://www.codechef.com/problems/{prob_id}"
    elif platform == "AtCoder":
        if "_" in prob_id:
            contest = prob_id.split("_")[0]
            return f"https://atcoder.jp/contests/{contest}/tasks/{prob_id}"
        return f"https://atcoder.jp/tasks/{prob_id}"
    elif platform == "CSES":
        return f"https://cses.fi/problemset/task/{prob_id}"
    elif platform == "SPOJ":
        return f"https://www.spoj.com/problems/{prob_id}"
    elif platform == "HackerRank":
        return f"https://www.hackerrank.com/challenges/{prob_id}"
    elif platform == "Aizu":
        return f"https://onlinejudge.u-aizu.ac.jp/problems/{prob_id}"
    elif platform == "DMOJ":
        return f"https://dmoj.ca/problem/{prob_id}"
    elif platform == "UVA":
        return f"https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=8&problem={prob_id}"
    return ""

def migrate():
    processed_count = 0
    for arch_plat, root_plat in platforms_map.items():
        arch_plat_path = os.path.join(archive_dir, arch_plat)
        root_plat_path = os.path.join(root_dir, root_plat)
        
        if not os.path.exists(arch_plat_path):
            continue
        if not os.path.exists(root_plat_path):
            os.makedirs(root_plat_path, exist_ok=True)
            
        arch_probs = os.listdir(arch_plat_path)
        root_probs = set()
        if os.path.exists(root_plat_path):
            for f in os.listdir(root_plat_path):
                if f.startswith("problem") and f.endswith(".cpp"):
                    prob_id = f[len("problem"):-len(".cpp")]
                    root_probs.add(prob_id)
                
        for arch_prob in arch_probs:
            if arch_prob not in root_probs:
                prob_dir = os.path.join(arch_plat_path, arch_prob)
                if not os.path.isdir(prob_dir):
                    continue
                
                cpp_files = [f for f in os.listdir(prob_dir) if f.endswith(".cpp")]
                if not cpp_files:
                    continue
                
                ac_files = [f for f in cpp_files if "_AC_" in f]
                best_file = sorted(ac_files, reverse=True)[0] if ac_files else sorted(cpp_files, reverse=True)[0]
                
                source_path = os.path.join(prob_dir, best_file)
                dest_filename = f"problem{arch_prob}.cpp"
                dest_path = os.path.join(root_plat_path, dest_filename)
                
                with open(source_path, "r") as f:
                    content = f.read()
                
                link = get_link(root_plat, arch_prob, arch_plat)
                header = f"/*\n * Problem: {arch_prob}\n * Platform: {root_plat}\n * Link: {link}\n */\n\n"
                
                with open(dest_path, "w") as f:
                    f.write(header + content)
                
                print(f"Migrated: {root_plat}/{dest_filename}")
                processed_count += 1
    print(f"Finished Migration. Total migrated: {processed_count}")

def categorize_cf():
    cf_dir = os.path.join(root_dir, "Codeforces")
    if not os.path.exists(cf_dir):
        return
    
    files = [f for f in os.listdir(cf_dir) if f.startswith("problem") and f.endswith(".cpp")]
    for f in files:
        prob_id = f[len("problem"):-len(".cpp")]
        # Extract letter category from ID (like 1234A -> A, 1A -> A, 102267B -> B)
        # Usually it's the first sequence of letters after numbers
        match = re.search(r"\d+([A-Z])", prob_id)
        if match:
            category = match.group(1)
            cat_dir_name = f"Solutions_for_Prob_{category}"
            cat_dir_path = os.path.join(cf_dir, cat_dir_name)
            if not os.path.exists(cat_dir_path):
                os.makedirs(cat_dir_path)
            
            # COPY to subfolder as requested ("sonrada butun solutionlar" implies keeping root ones too? 
            # or just categorized folders and the rest. 
            # I will move them to subfolders but maybe also keep them organized.
            # User said: "Codeforces qovlughunda ilk sirtada olcaq shekilde... sonrada butun solutionlar"
            # This might mean folders at the top, then the files. 
            # I'll just COPY them into categorical folders so they stay in root too for "all solutions" view.
            shutil.copy2(os.path.join(cf_dir, f), os.path.join(cat_dir_path, f))
            print(f"Categorized: {f} -> {cat_dir_name}")
        else:
            print(f"Could not categorize: {f}")

migrate()
categorize_cf()
