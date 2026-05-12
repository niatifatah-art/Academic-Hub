Lecture Notes: Introduction to Bash Scripting
Subject: Open Source Systems

Topic: Automation and the Shebang

A script is a file containing a series of commands that the shell executes in sequence. This is where you transition from a user to a developer.

1. The Shebang (#!)
Every Bash script must start with the "Shebang" line. It tells the operating system which interpreter to use to run the code.

Syntax: #!/bin/bash

2. Creating Your First Script
Create a file: touch myscript.sh

Add the shebang and commands:

Bash
#!/bin/bash
echo "Starting automation..."
mkdir -p backup_folder
cp *.md backup_folder/
echo "Backup complete at $(date)"
3. Execution Workflow
As learned in the Permissions lecture, a script cannot run until you grant it execute permissions.

Bash
chmod +x myscript.sh
./myscript.sh