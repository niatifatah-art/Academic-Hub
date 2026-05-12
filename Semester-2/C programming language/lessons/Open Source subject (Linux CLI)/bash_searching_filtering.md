Lecture Notes: Searching and Filtering Data
Subject: Open Source Systems

Topic: The grep and find commands

Efficiency in Linux is defined by how fast you can locate information. We use grep to search inside files and find to locate the files themselves.

1. The grep Command (Global Regular Expression Print)
grep searches for a specific pattern (text) within a file or output.

Basic Usage: grep "pattern" filename

Case Insensitive: grep -i "pattern" filename

Professor's Example: Searching for your name in a system file.

Bash
# Find every line containing "fatah" regardless of case
grep -i "fatah" /etc/passwd
2. Using grep with Pipes (|)
This is the most powerful way to use grep. You take the output of one command and filter it.

Bash
# List all files and filter for only those that are ".md" files
ls -l | grep ".md"
3. The find Command
While grep looks inside files, find looks for the files in the directory tree.

Syntax: find <path> -name <filename>

Professor's Example: Finding a specific configuration file.

Bash
# Find a file named 'config.txt' starting from the current directory
find . -name "config.txt"