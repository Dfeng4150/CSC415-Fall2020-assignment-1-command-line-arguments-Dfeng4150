# HW1-Command-Line

# Introduction

Our first assignment was to get our hands dirty using Linux, while working with MakeFile and creating our very c program using command lines.

# Write up

### Description

To famiiarize ourselves with using Linux and using the terminals to do commands with our MakeFile that will help display our source code file using mutiple make commands.

### Steps

1.  In order to make my files run, using the make commands, I, first, had to make modifications to setup the necessary procedures within the MakeFile.

2.  I, then, created a c file under the file name of Feng_Denny_H1_main.c in the document folder on Linux so it matches the MakeFile modifications.

3.  Inside the Feng_Denny_H1_main.c , I, wrote a few lines of code to help display, Hello, CSC415, I'm Denny Feng! , using the commands: **make run**.

### Issues

- The first issue, I came across, while setting up VirutalBox machine was an error of `AMD-V is not enabled`. In order for me to fix this issue,
  I had to manually enable `Virtualization` in the BIOS setting of my computer. After that, I was good to go.

- Second issue was the command, `sudo apt-get install curl` could not be executed. So, in order for me to fix this issues, was to do a few commands
- **`sudo killall apt apt-get`**
- **`sudo rm/var/lib/apt/lists/lock`**
- **`sudo rm/var/lib/apt/archives/lock`**
- **`sudo rm/var//apt/archives/lock`**

Shortly after, I ran `sudo apt-get install curl`, once again and it worked.

However, for my project, I didn't have any issues besides the one stated above.

### Compilation and Execution Output

![hw1](https://user-images.githubusercontent.com/70169968/91248408-70b73c00-e709-11ea-8601-91618be8f626.png)

