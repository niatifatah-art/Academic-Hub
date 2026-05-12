Lecture Notes: Essential Filesystem Commands
Subject: Open Source Systems
Topic: Directory Management and Navigation

After learning how to create content inside files, you must learn how to organize these files within directories.

1. Creating Directories: mkdir
The mkdir (make directory) command is used to create new folders.

Syntax: mkdir <directory_name>

Professor's Example: Creating a dedicated folder for a lab.

Bash
mkdir lab_exercise_1
2. Removing Files and Folders: rm and rmdir
Cleaning your workspace is as important as building it.

rm <file>: Deletes a file.

rm -r <directory>: Deletes a directory and its entire contents (Recursive). Use with caution.

3. Copying and Moving: cp and mv
cp <source> <destination>: Creates a duplicate.

mv <source> <destination>: Moves a file or renames it.