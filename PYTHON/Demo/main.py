import json
import datetime
import git

FILE_PATH = 'D:/GITHUB/Fun-with-code/data.json'  # Adjusted file path
REPO_PATH = 'D:/GITHUB/Fun-with-code'  # Your Git repository path

def make_commit(n):
    if n == 0:
        repo.git.push('origin', 'main', force=True)  # Force push to update GitHub
        return
    
    date_str = datetime.datetime(2025, 3, 31).isoformat()  # Fixed commit date

    data = {"date": date_str}
    print(date_str)

    with open(FILE_PATH, 'w') as f:
        json.dump(data, f)

    repo.index.add([FILE_PATH])
    repo.index.commit(date_str, author_date=date_str, commit_date=date_str)
    
    make_commit(n - 1)  # Recursive call

repo = git.Repo(REPO_PATH)
make_commit(100)  # Start making commits
