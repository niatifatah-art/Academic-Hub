Lecture Notes: I/O Redirection Commands
Subject: Open Source Systems

Topic: Redirecting Output to Files

In Linux, everything is a file. The real power of echo and other commands begins when we stop printing to the screen and start writing to the disk.

1. The Output Redirection Operator >
This operator takes the output of a command and writes it into a file.

Warning: It overwrites the file if it already exists.

Professor's Example:
Bash
# Creating a new file named 'test.txt' with content
echo "This is my first system file" > test.txt
2. The Append Operator >>
This operator adds the output to the end of an existing file without deleting its current content.

Lab Task:
Bash
# Adding a second line to the same file
echo "Adding a second line for documentation" >> test.txt
3. Verifying the Command Result: cat
To "start" with commands properly, you must learn how to read what you wrote. The cat (concatenate) command is used to display file contents.

Bash
cat test.txt