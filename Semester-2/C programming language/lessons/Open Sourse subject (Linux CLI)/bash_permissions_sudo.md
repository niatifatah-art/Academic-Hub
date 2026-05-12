Lecture Notes: Permissions and Administrative Control
Subject: Open Source Systems

Topic: chmod, chown, and the sudo command

In Linux, security is governed by file permissions. As a security enthusiast, understanding who can Read, Write, or Execute a file is your primary task.

1. The sudo Command (SuperUser DO)
This command allows you to run programs with the security privileges of another user (by default, the root user).

Usage: sudo <command>

Warning: Using sudo without understanding the command can destroy your system.

2. Understanding File Permissions: chmod
The chmod (change mode) command changes who can interact with a file. Permissions are divided into:

r (read)

w (write)

x (execute)

Numerical Representation (The Professional Way):
7: Read + Write + Execute (4+2+1)

5: Read + Execute (4+1)

4: Read only

Professor's Example:
To make a script executable (essential for your future automation tools):

Bash
# Making a file executable for the owner
chmod 755 my_script.sh
3. Viewing Permissions: ls -l
To verify your changes, always use the long format of the list command.

Bash
ls -l
# Output example: -rwxr-xr-x 1 fatah fatah ...