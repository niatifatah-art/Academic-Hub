# Variables in C 
---

## 1. What a Variable Is

A variable is a **place in memory** used to store a value.
That value can change while the program is running.

In C, a variable always has:

* a type
* a name
* a value

A variable **must be declared before it is used**.

---

## 2. Declaring a Variable

Basic declaration:

```c
int x;
```

Declaration with initialization:

```c
int x = 5;
```

* `int` → data type
* `x` → variable name
* `5` → stored value

---

## 3. Common Data Types

### int

Stores whole numbers.

```c
int age = 20;
```

---

### float

Stores decimal numbers.

```c
float price = 19.5f;
```

---

### double

Stores decimal numbers with higher precision.

```c
double pi = 3.14;
```

---

### char

Stores a single character.

```c
char letter = 'A';
```

Single quotes are required.

---

## 4. Using Variables

```c
#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 5;

    int sum = a + b;

    printf("Sum: %d\n", sum);

    return 0;
}
```

---

## 5. Variable Naming Rules

A variable name:

* starts with a letter or `_`
* contains no spaces
* may include letters, numbers, and `_`
* is case-sensitive
* is not a reserved keyword

Valid:

```c
int score;
int total_sum;
```

Invalid:

```c
int 2score;
int total sum;
```

---

## 6. Changing a Variable Value

```c
int x = 3;
x = 7;
```

The previous value is overwritten.

---

## 7. Printing Variables

Common format specifiers:

* `%d` → int
* `%f` → float
* `%lf` → double
* `%c` → char

Example:

```c
printf("Value: %d", x);
```

---

## 8. Common Mistakes

* Using a variable without declaring it
* Forgetting to initialize a variable
* Using the wrong format specifier
* Confusing `=` with `==`

---

## Next Step

After variables, study:

* Operators

---

End of lesson.
