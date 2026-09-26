  [ WORKING DIRECTORY ]           [ STAGING AREA ]          [ LOCAL REPOSITORY ]        [ REMOTE REPOSITORY ]
(Local Files / VS Code)           (The Index Box)              (Local Commits)               (GitHub / Cloud)

           |                              |                           |                              |
           |-------- git add . ---------->|                           |                              |
           |                              |------ git commit -------->|                              |
           |                                                          |--------- git push ---------->|
           |                              |                           |                              |
           |<------- git reset -----------|                           |                              |
           |<------------------- git reset HEAD~1 --------------------|                              |
           |                              |<-- git reset --soft HEAD~1|                              |
           |                                                          |<-- git fetch / git pull -----|
           |                                                          |                              |



To understand how Git works under the hood, think of it as a workflow with four distinct areas.
Your files move through these areas sequentially as you write code, prepare it, save it locally, and upload it to the cloud. [1, 2, 3] 
------------------------------
## The 4 Git Areas## 1. Working Directory (Your Local Workspace)

* What it is: The actual folder on your computer's hard drive where you are opening files, typing code, and saving your work in VS Code.
* File Status: Files here are either Untracked (brand new files Git doesn't know about yet) or Modified (existing files you have changed).
* Action: You write and modify code here. [4, 5, 6, 7, 8] 

## 2. Staging Area (The Index / Preparation Zone)

* What it is: A temporary preparation zone. Think of it as a shipping box that you are packing before taping it shut.
* File Status: Files here are Staged (marked as green in your terminal and ready to be committed).
* Action: You use git add <file> to move files from your Working Directory into this area. [9, 10, 11, 12, 13] 

## 3. Local Repository (The Commit History on your PC)

* What it is: The safe storage inside the hidden .git folder on your computer. This is where your actual save-points (commits) are stored.
* File Status: Files here are Committed. Git has taken a permanent snapshot of them.
* Action: You use git commit -m "message" to lock everything currently sitting in the Staging Area into a permanent commit. [14, 15, 16, 17, 18] 

## 4. Remote Repository (GitHub / GitLab)

* What it is: The cloud version of your project hosted on the internet. It acts as your project's backup and allows for collaboration.
* Action: You use git push to send commits from your Local Repository to the Remote Repository. [19, 20, 21, 22, 23] 

------------------------------
## How Files Move Between Areas
Here is a quick visual map of how files travel using Git commands:

[ Working Directory ]  ---> (git add) --->  [ Staging Area ]
        ^                                           |
        |                                     (git commit)
        |                                           v
[ Local Repository  ]  <--- (git reset) <-- [ Local Repository ]
        |
    (git push)
        v
[ Remote Repository ] (GitHub)


