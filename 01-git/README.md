# Git Workshop
Welcome to the git workshop, you will learn how to use git (particularly how to use github) to work with your peers in different projects.
The first part is to make sure that git is installed in your machine.
```console
foo@bar:foo~$ git
```
If this command gives an error then it means that it has not been recognised by your terminal, therefore you have to install git.
## Install Git [Installation Guide from github](ghttps://github.com/git-guides/install-git)
In this web you will find a guide of how to install github on your machine, the method will vary from one OS to other (being Linux the simplest)
## Basic Git commands
1. git clone <repository-link> : this command will create a local copy of your repository so that you can work in the code or documentation on your own machine, remember that the changes that you make in this local copy won't affect the repository on github (yet)
2. git add . : adds any changes made in the path that you are in (folder that you are in, this is the working directory) to the staging area (The changes are not yet visible in github)
3. git commit -m "message" : moves the changes from the staging area to the local repository, the message is impoertant as it will be seen by the other members of your team so be sure that it describes what the changes are.
4. git push : moves the changes from the local repository to the remote repository (github in our case)
5. git pull : updates the version that you have on the local repository with the changes that have occurred in the remote repository
These commands define the workflow of git
  <img src="https://camo.githubusercontent.com/033e9b24ca753fca9dbfb700eac610b5fb83bc9a968c9cb445489914e6ce8092/68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f6d61782f333833342f312a672d69573972555a56654853644b4e6e5662417551672e706e67"
     alt="Markdown Monster icon"
     style="float: left; margin-right: 10px;" />
## Branches
  Let's say that you are working in one section of the code that is broken and a friend of yours is working on another section of the code, to avoid possible problems both should be working in what is called a different branch. A branch of a repository is basically a copy of the remote repository in which you can commit and create changes but won't affect the main respoitory (that is on the master or main branch). However, we can incorporate the changes of one branch to another one by merging our branch to the master or main branch (actually you can merge any branch with any other branch as long as there are no conflicts), this is done through a pull request.
### Basic Branch commands
  1. branch: tells you in which branch you are working
  2. branch name_of_new_branch: creates a new branch of with the given name
  3. branch checkout name: moves you from the branch that you are in into the branch with the given name
 

