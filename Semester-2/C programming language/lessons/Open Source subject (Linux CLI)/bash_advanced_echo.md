Lecture Notes: Combining Commands with echo
Subject: Open Source Systems

Topic: Command Substitution and Piping

In advanced shell scripting, echo is rarely used in isolation. We often need to display the output of one command inside another or pass data through a pipeline.

1. Command Substitution $(command)
This allows you to run a command and include its output directly within the echo string.

Syntax: echo "The text is $(command)"

Professor's Example: Checking the current directory or user within a string.

Bash
# Outputting the current working directory inside a sentence
echo "Current directory: $(pwd)"

# Outputting the current date
echo "Today is: $(date)"
2. Piping with echo (|)
The pipe operator takes the output of echo and sends it as input to another command. This is a fundamental concept in Linux (The "Lego" philosophy).

Professor's Example: Sending text to grep for searching or wc for counting.

Bash
# Counting how many words are in a string
echo "I am learning Bash" | wc -w

# Converting text to uppercase using 'tr'
echo "fatah" | tr '[:lower:]' '[:upper:]'
3. Combining Options and Substitution
You can use the options we learned previously (-n, -e) alongside these advanced techniques.

Lab Task Example:
Bash
echo -n "Logged in user: "; whoami
echo -e "System Path Details:\n$(echo $PATH | tr ':' '\n')"