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