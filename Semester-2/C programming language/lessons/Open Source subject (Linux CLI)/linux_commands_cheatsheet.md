Essential Linux Command Reference
1. Terminal Output and Formatting
echo "text": Standard output followed by a newline.

echo -n "text": Output without a trailing newline (useful for script prompts).

echo -e "line1\nline2": Enables interpretation of backslash escapes like newlines and tabs.

echo $VARIABLE: Displays the value of a stored environment or user variable.

2. Filesystem Management
pwd: Prints the full path of the current working directory.

ls -l: Lists directory contents with detailed information (permissions, size, owner).

mkdir folder_name: Creates a new directory.

touch file.txt: Creates an empty file or updates the timestamp of an existing one.

cp source destination: Copies files or directories.

mv source destination: Moves or renames files or directories.

rm file.txt: Removes a specific file.

rm -r folder_name: Recursively removes a directory and all its contents.

3. I/O Redirection and File Viewing
command > file.txt: Overwrites a file with the command's output.

command >> file.txt: Appends the command's output to the end of a file.

cat file.txt: Concatenates and displays the entire content of a file.

head -n 5 file.txt: Displays the first 5 lines of a file.

4. Administrative Controls and Permissions
sudo command: Executes a command with administrative (root) privileges.

chmod +x script.sh: Grants execution permissions to a file.

chmod 755 file: Sets specific read, write, and execute permissions (Owner: rwx, Group: rx, Others: rx).

5. Search and Filtering
grep "pattern" file.txt: Searches for a specific string within a file.

ls | grep ".md": Filters the output of a command to show only matching items.

find . -name "*.c": Searches for files matching a pattern starting from the current directory.

6. System Process Management
ps aux: Displays a detailed snapshot of all running processes.

top: Provides a real-time, interactive view of system resource usage.

kill PID: Terminates a process using its unique Process ID.