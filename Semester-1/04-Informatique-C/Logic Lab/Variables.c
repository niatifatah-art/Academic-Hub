/*
 * Filename: variables_master_reference.c
 * Description: A complete, self-contained technical guide to C Variables.
 * Author: [Fatah Niati]
 * Date: 27/12/2025
 * * --- CONCEPTS COVERED ---
 * 1. Theoretical Definition & Memory Role.
 * 2. Naming Conventions & Reserved Keywords.
 * 3. Primitive Data Types & Format Specifiers.
 * 4. Declaration vs. Initialization (Garbage Values).
 * 5. Constants (Read-Only Storage).
 * 6. Memory Size Analysis (sizeof).
 * 7. Variable Scope (Local vs. Global).
 * 8. Security Focus: Integer Overflow.
 */

#include <stdio.h>      // Standard Input/Output
#include <stdbool.h>    // Support for boolean types
#include <limits.h>     // Limits for integer types
#include <float.h>      // Limits for floating-point types

// --- GLOBAL SCOPE ---
// Variables declared here are accessible globally.
// They are stored in the 'Data Segment' and initialized to 0 by default.
int global_counter = 100;

int main() {

    // =========================================================================
    // 1. DEFINITION & SYNTAX
    // =========================================================================
    /* * A variable is a named location in RAM. 
     * Syntax: DataType VariableName = Value;
     */

    // =========================================================================
    // 2. NAMING CONVENTIONS (Rules)
    // =========================================================================
    /* * - Must start with a letter (a-z, A-Z) or underscore (_).
     * - No digits at the beginning (e.g., '1var' is INVALID).
     * - No spaces or special characters (@, $, #).
     * - Case-sensitive: 'score' is not the same as 'Score'.
     * - No Reserved Keywords: cannot use 'int', 'return', 'void', etc.
     */
    int student_age = 20; // Valid naming

    // =========================================================================
    // 3. PRIMITIVE DATA TYPES & FORMAT SPECIFIERS
    // =========================================================================
    /* * Each type occupies a specific size in memory and requires a format specifier.
     */
    int count = 10;                // Integer: Whole numbers (%d)
    float price = 19.99f;          // Float: Single precision decimal (%f)
    double distance = 1234.5678;   // Double: Double precision decimal (%lf)
    char grade = 'A';              // Char: Single character (%c)
    bool is_valid = true;          // Bool: True (1) or False (0) (%d)

    printf("--- Section 3: Data Types ---\n");
    printf("Int: %d | Float: %.2f | Double: %.4lf | Char: %c | Bool: %d\n\n", 
            count, price, distance, grade, is_valid);

    // =========================================================================
    // 4. MEMORY SIZE (sizeof Operator)
    // =========================================================================
    /* * sizeof() returns the size in bytes. This is critical for memory management.
     */
    printf("--- Section 4: Memory Size (Bytes) ---\n");
    printf("Size of int:    %zu bytes\n", sizeof(int));
    printf("Size of float:  %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char:   %zu byte\n\n", sizeof(char));

    

    // =========================================================================
    // 5. CONSTANTS (Immutable Variables)
    // =========================================================================
    /* * Using 'const' prevents the variable value from being changed.
     * Useful for fixed values like PI or tax rates.
     */
    const float PI = 3.14159f;
    // PI = 3.14; // This would cause a COMPILATION ERROR.

    // =========================================================================
    // 6. INITIALIZATION & REASSIGNMENT
    // =========================================================================
    /* * IMPORTANT: Variables declared without a value contain 'Garbage Values'.
     * Always initialize variables to 0 or a known value for security.
     */
    int current_score;      // Declaration (Warning: Garbage Value)
    current_score = 50;     // Initialization
    current_score = 75;     // Reassignment (Old value 50 is overwritten)

    // =========================================================================
    // 7. SECURITY FOCUS: INTEGER OVERFLOW
    // =========================================================================
    /* * Occurs when a value exceeds the maximum limit of its data type.
     * This is a major source of software vulnerabilities.
     */
    printf("--- Section 7: Integer Overflow ---\n");
    int max_limit = INT_MAX; // Maximum value of a signed 32-bit int
    printf("Max Limit: %d\n", max_limit);
    
    int result = max_limit + 1; // Wraps around to negative (Undefined behavior)
    printf("After Overflow: %d\n\n", result);

    // =========================================================================
    // 8. SCOPE (Local vs. Global)
    // =========================================================================
    /* * - Global: Declared outside main(), lasts for the life of the program.
     * - Local: Declared inside main() or {}, exists only within that block.
     */
    int local_value = 5; 
    printf("Global: %d | Local: %d\n", global_counter, local_value);

    return 0; // Successful execution
}