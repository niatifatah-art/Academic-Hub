C Programming: Chapter 4 Summary (Complete)
4. Variables & Data Output

In C, a variable is an allocated space in memory. To work with them, I must follow a strict process of declaration and initialization, but most importantly, I need to know how to "call" them back into the terminal.
The Full Variables List:

    int: Whole numbers. Use %d as the placeholder.

    float: Decimal numbers. Use %f as the placeholder.

    char: Single characters (in single quotes ' '). Use %c.

    char[]: Strings/Arrays of characters (in double quotes " "). Use %s.

How to Print Variables:

Unlike Python, where I can just put a variable inside print(), in C I must use Format Specifiers. These act as "placeholders" within the string that tell printf what kind of data is coming.

Syntax Example:
C

int age = 21;
char name[] = "Fatah";

printf("Hello %s\n", name);        // %s matches the string 'name'
printf("You are %d years old", age); // %d matches the integer 'age'

Key Logic for My Projects:

    Memory Management: C forces me to decide the data type upfront. This is more efficient for the hardware (important for my Electronics track) but less flexible than Python.

    The Placeholder Rule: If I use the wrong specifier (e.g., using %d for a float), the output will be garbage or the program will crash. The number of specifiers in the string must exactly match the number of variables passed after the comma.