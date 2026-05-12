Lecture Notes: The echo Command in Bash
Subject: Open Source Systems

Topic: Standard Output & Command Options

Overview
The echo command is a built-in utility in Bash used to display lines of text or variables to the standard output. While seemingly simple, mastering its options is critical for shell scripting and automation.

1. The -n Option: Suppressing the Trailing Newline
By default, echo appends a newline character (\n) at the end of every output string.

Function: The -n flag instructs the shell to omit this automatic newline.

Use Case: This is essential when you need the cursor to remain on the same line for subsequent commands or user input.

Academic Example:
Bash
echo -n "Step 1: Initializing..."; echo " Done."
Professor's Note: In your practical labs, remember that if you use -n in the final command of a sequence, your shell prompt will append directly to your output, resulting in a cluttered terminal.

2. The -e Option: Enabling Backslash Escapes
Standard echo treats backslashes as literal characters. To process special formatting characters, the -e flag must be invoked.

\n (Newline): Forces the text after it to a new line.

\t (Horizontal Tab): Inserts a tab space for aligned output.

Technical Example:
Bash
echo -e "System Status:\n\t- CPU: OK\n\t- RAM: OK"