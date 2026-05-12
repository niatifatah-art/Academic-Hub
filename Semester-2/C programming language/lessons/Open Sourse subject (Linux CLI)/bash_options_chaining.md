Lecture Notes: Chaining Flags and Options
Subject: Open Source Systems

Topic: Combining -n and -e for Formatted Output

In professional scripting, we often need to combine multiple behaviors. Instead of executing separate commands, Bash allows us to chain options to achieve a specific formatting goal.

1. Combining -n and -e
When you need to interpret special characters (like tabs or colors) but without ending the line with a newline, you combine both flags.

Syntax: echo -ne "Output" or echo -en "Output"

Logical Breakdown:

-n: Keep the cursor on the current line.

-e: Process the backslash escapes within the string.

Professor's Practical Example:
This is frequently used in Progress Bars or Status Indicators where the text updates on the same line.

Bash
# Printing a tab-spaced status without moving to a new line
echo -ne "Loading Data:\t[50%]"
# The cursor stays right after [50%] allowing the next command to continue from there.
2. Practical Lab Scenario: Formatted Prompts
If you are building a custom tool (like the ones you'll need for your cybersecurity projects), you might want to prompt the user for input on the same line as a formatted label.

Bash
echo -ne "Target IP Address:\t"
# Followed by a command to read input (which we will cover in later lectures)