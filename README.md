# Ft_printf

## Description
ft_printf is a custom implementation of the standard C printf function. This project aims to deepen the understanding of variadic functions in C.

## Supported Conversion Specifiers
The following format specifiers are supported:

- %c → Prints a single character.
- %s → Prints a string (null-terminated).
- %p → Prints a pointer address in hexadecimal format.
- %d → Prints a decimal (base 10) number.
- %i → Prints an integer (base 10).
- %u → Prints an unsigned decimal (base 10) number.
- %x → Prints a number in lowercase hexadecimal (base 16).
- %X → Prints a number in uppercase hexadecimal (base 16).
- %% → Prints a percent sign.

## Installation
Clone the repository and compile the library using:

```sh
make
```
This will generate libftprintf.a, which can be linked to your projects.

## Usage
Include the header file in your project:

```c
#include "ft_printf.h"
```
Compile your program with the ft_printf library:

```sh
gcc my_program.c -L. -lftprintf -o my_program
```
Example usage:

```c
#include "ft_printf.h"

int main() {
    ft_printf("My name is %s! I am %d years old.\n", "Bimo", 5);
    return 0;
}
```
