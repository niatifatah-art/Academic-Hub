#include <stdio.h>      // For printing
#include <stdbool.h>    // For using true/false

int main() {
    
    // ==========================================
    // 1. DATA TYPES (The 4 Pillars)
    // ==========================================
    // These are the most used types in C.
    
    int age = 19;            // Integer: Whole numbers (%d)
    float height = 1.80;    // Float: Decimal numbers (%f)
    char grade = 'A';        // Char: Single character (%c)
    bool isStudent = true;   // Bool: True (1) or False (0) (%d)

    printf("--- Section 1: Basic Types ---\n");
    printf("Age: %d, Height: %.2f, Grade: %c, Student: %d\n\n", age, height, grade, isStudent);

    // ==========================================
    // 2. IMPORTANT RULES (Naming & Initialization)
    // ==========================================
    /*
     * RULE 1: Names cannot start with numbers (e.g., 1name is WRONG).
     * RULE 2: No spaces in names (e.g., user age is WRONG, use user_age).
     * RULE 3: Initialization! If you don't give a variable a value, 
     * it will contain "GARBAGE" (random old data from RAM).
     */
    int clean_variable = 0; // Good Practice: Always start with 0 or a value.

    // ==========================================
    // 3. MEMORY SIZE (How much space it takes?)
    // ==========================================
    /*
     * Every variable takes "space" in your computer's memory (RAM).
     * We use sizeof() to measure this space in Bytes.
     */
    printf("--- Section 3: Memory Size ---\n");
    printf("An 'int' takes:   %zu bytes\n", sizeof(int));
    printf("A 'char' takes:  %zu byte\n\n", sizeof(char));

    

    // ==========================================
    // 4. CONSTANTS (The "Read-Only" Variables)
    // ==========================================
    /*
     * If you want a variable that NEVER changes (like your Birth Year),
     * use the 'const' keyword.
     */
    const int MY_BIRTH_YEAR = 2005;
    // MY_BIRTH_YEAR = 2010; // This will cause an ERROR if you try it!

    printf("--- Section 4: Constants ---\n");
    printf("Birth Year is fixed at: %d\n\n", MY_BIRTH_YEAR);

    // ==========================================
    // 5. TYPE CONVERSION (Bonus Pro Tip)
    // ==========================================
    /*
     * Sometimes you need to treat an 'int' as a 'float'.
     */
    int apples = 5;
    int people = 2;
    float result = (float)apples / people; // Result is 2.5, not 2.
    
    printf("--- Section 5: Math ---\n");
    printf("5 divided by 2 is: %.1f\n", result);

    return 0; 
}