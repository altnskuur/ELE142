# Basic GIT Commands
## Starting a Project
+ Initiliaze a local repository:
```
git init
```
+ Clone remote repository:
```
git clone https://github.com/USERNAME/REPOSITORY.git
```
## Working with Changes
+ Check the status of your repository:
```
git status
```
+ Stage changes:
```
git add .
```
Stages all changes.
+ To stage a spesific file:
``` 
git add filename
```
+ Commit staged changes:
```
git commit -m "Your commit message"
```
Saves changes locally with a descriptive message.

## Working with Remote Repositories
+ Add a remote repository:
``` 
git remote add origin https://github.com/USERNAME/REPOSITORY.git
```
Links your local repository to a remote GitHub repository.
+ Push Changes to a repote repository:
```
git push -u origin main
```
Uploads changes to the **main** branch on GitHub.
+ Pull changes from a remote repository:
```
git pull origin main
```
Fetches and merges from the **main** branch on GitHub to your local repository.

# Branch Management
Branches let you work on different versions of a project simultaneously.
+ Create a new branch:
```
git branch branch_name
```
+ Switch to a branch:
```
git checkout branch_name
```
+ Create and switch to a new branch:
```
git checkout -b branch_name 
```
+ List all branches:
```
git branch
```
+ Push a new branch to a remote repository 
```
git push -u origin branch_name
```
 
 # Merging and Conflict Resolution
 + Merge branches: to merge **branch_name** into **main**:
 ```
 git checkout main
 git merge branch_name
 ```
+ Resolve conflicts: if a merge conflict occurs: 
  - Open the conflicted files, resolve issues manually.
  - Then:
  ```
  git add resolved_file
  git commit 
  ```

# Viewing History
+ View commit history:
```
git log
```
for a simpler log view:
```
git log --oneline
```
+ See changes made to files:
``` 
git diff
```
Shows unstaged changes.

# Working with GitHub
+ Check your remote repository URL:
```
git remote -v
```
+ Fetch updates without merging:
```
git fetch
```
Download changes from the remote repository but does not merge them.
+ Force push changes (overwrite remote):
```
git push --force
```
Overwrites the remote branch with your local branch (use with caution).

# Git Configuration
+ Set your Git username:
```
git config --global user.name "Your Name"
```
+ Set your Git email address:
```
git config --globaluser.email "youremail@example.com"
```
+ Set the default branch name to **main**:
``` 
git config --global init.defaultBranch main
```

# Workflow Example: Creating and Pushing a New Project
1. Initialize a local repository
2. Add a remote repository
3. Stage your changes
4. Commit your changes
5. Push your changes to GitHub
```
git init
git remote add origin https://github.com/altnskuur/ELE142.git
git add .
git commit -m "First Commit"
git push -u origin main
```