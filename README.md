#  ft_printf

---

##  Description

**ft_printf** is a 42 school project where the goal is to recode a personalized version of the `printf` function from the standard C library. The main objective is to understand variadic arguments (functions that take a variable number of arguments) and master string formatting and base conversions.

---

##  Features

### 1. Conversions

* %c : Prints a single character.
* %s : Prints a string.
* %p : Prints a pointer address in hexadecimal format (prefixed with 0x).
* %d / %i : Prints a signed decimal integer.
* %u : Prints an unsigned decimal integer.
* %x : Prints an unsigned hexadecimal integer (lowercase).
* %X : Prints an unsigned hexadecimal integer (uppercase).
* %% : Prints a percent sign.

### 2. Variadic Arguments

* Usage of va_list, va_start, va_arg, and va_end to retrieve and process a variable number of parameters.

### 3. Writing

* Output is handled using the write() system call to display characters on the standard output.

---

##  Installation

### 1. Clone the repository

git clone [https://github.com/slkrt111/ft_printf.git](https://www.google.com/search?q=https://github.com/slkrt111/ft_printf.git)
cd ft_printf

### 2. Compilation

The project compiles into a static library libftprintf.a using the Makefile:
make

---

##  Technical Implementation

* Language: C
* Compiler: cc (with -Wall -Wextra -Werror)
* Memory Management: No memory leaks, efficient handling of data types.
* Standards: Compliant with the 42 School Norminette.
