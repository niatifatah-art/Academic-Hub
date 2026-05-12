1. Accessing Variables
To display the value of a variable, we use the $ prefix before the variable name.

Syntax: echo $VARIABLE_NAME

Professor's Example: Displaying built-in environment variables.

Bash
# Display the current user and home directory
echo "User: $USER"
echo "Home Path: $HOME"
2. Quoting: Double vs Single Quotes
This is a common point of failure in student labs.

Double Quotes (" "): Allow variable expansion (the variable is replaced by its value).

Single Quotes (' '): Prevent expansion (the text is printed literally as written).

Lab Demonstration:
Bash
NAME="Fatah"
echo "Hello $NAME"  # Output: Hello Fatah
echo 'Hello $NAME'  # Output: Hello $NAME
3. Combining Variables with Options
Bash
# Using -e to format variable output
echo -e "User Information:\n\tID: $UID\n\tShell: $SHELL"