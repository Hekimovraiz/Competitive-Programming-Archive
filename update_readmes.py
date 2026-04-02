
import os
import re

root_dir = "/home/lek/Documents/Competitive-Programming-Archive"
platforms = [
    "Aizu", "AtCoder", "CodeChef", "Codeforces", "CSAcademy", 
    "CSES", "DMOJ", "EOlymp", "HackerRank", "QOJ", "SPOJ", 
    "USACO", "UVA", "VNOJ", "Yosupo"
]

all_problems_count = 0

for platform in platforms:
    p_path = os.path.join(root_dir, platform)
    if not os.path.exists(p_path):
        continue
    
    # List all .cpp files in the ROOT of the platform folder
    cpp_files = sorted([f for f in os.listdir(p_path) if f.startswith("problem") and f.endswith(".cpp")])
    count = len(cpp_files)
    all_problems_count += count
    
    # Generate Table of Contents
    table_content = "| # | Problem ID | Link |\n|---|------------|------|\n"
    for i, f in enumerate(cpp_files, 1):
        prob_id = f[len("problem"):-len(".cpp")]
        file_path = os.path.join(p_path, f)
        
        # Try to extract link from file content
        link = ""
        try:
            with open(file_path, "r") as cf:
                content = cf.read(1000) # Read start of file
                match = re.search(r"Link: (https?://\S+)", content)
                if match:
                    link = match.group(1)
        except:
            pass
        
        link_str = f"[Link]({link})" if link else "N/A"
        table_content += f"| {i} | {prob_id} | {link_str} |\n"
    
    readme_content = f"# {platform}\n\n"
    readme_content += f"Total unique problems solved: **{count}**\n\n"
    
    if platform == "Codeforces":
        readme_content += "## Categories\n"
        # List subfolders
        subfolders = sorted([d for d in os.listdir(p_path) if os.path.isdir(os.path.join(p_path, d)) and d.startswith("Solutions_for_Prob")])
        for sf in subfolders:
            sf_count = len([f for f in os.listdir(os.path.join(p_path, sf)) if f.startswith("problem")])
            readme_content += f"- [{sf}](./{sf}) ({sf_count} problems)\n"
        readme_content += "\n"

    readme_content += "## Solutions List\n\n"
    readme_content += table_content
    
    with open(os.path.join(p_path, "README.md"), "w") as rf:
        rf.write(readme_content)
    
    print(f"Updated README for {platform} ({count} problems)")

# Finally update root README with sorted leaderboard
root_readme_path = os.path.join(root_dir, "README.md")
data = []
for p in platforms:
    p_path = os.path.join(root_dir, p)
    if os.path.exists(p_path):
        count = len([f for f in os.listdir(p_path) if f.startswith('problem') and f.endswith('.cpp')])
        data.append((p, count))

data.sort(key=lambda x: x[1], reverse=True)

with open(root_readme_path, "w") as rf:
    rf.write("# Competitive-Programming-Archive\n\n")
    rf.write("A collection of my solutions from various competitive programming platforms.\n\n")
    rf.write("| Platform | Problems Solved |\n")
    rf.write("|----------|----------------|\n")
    total = 0
    for p, count in data:
        rf.write(f"| {p} | {count} |\n")
        total += count
    rf.write(f"| **Total** | **{total}** |\n\n")
    rf.write(f"Total problems solved: **{total}**\n")

print("Updated root README.md")
