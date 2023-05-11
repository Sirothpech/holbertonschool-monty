# C - Stack, Queues - LIFO, FIFO

## Introduction
This repository is about our third major project after three months learning C programming language at Holberton School.
The project was to create interpreter for Monty ByteCode files.
We have done this project in teams of three people in four days.

## Instructions
***Create an interpreter for Monty ByteCode files, manipulating the stack and queues.***

## Requirements
### General
* Allowed editors:```vi```, ```vim```, ```emacs```
* All your files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
* All your files should end with a new line
* A ```README.md``` file, at the root of the folder of the project is mandatory
* Your code should use the ```Betty``` style. It will be checked using```betty-style.pl``` and ```betty-doc.pl```
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library
* The prototypes of all your functions should be included in your header file called ```hash_tables.h```
* Don’t forget to push your header file
* All your header files should be include guarded
* You are expected to do the tasks in the order shown in the project

### Tasks and Prototype
#### Tasks 0 to 12
Implement the ```push``` and ```pall``` opcodes.

####The push opcode

The opcode ```push``` pushes an element to the stack.

* Usage: push <int>
  - where <int> is an integer
* if <int> is not an integer or if there is no argument given to push, print the error message L<line_number>: usage: push integer, followed by a new line, and exit with the status EXIT_FAILURE
  - where is the line number in the file
* You won’t have to deal with overflows. Use the atoi function
####The pall opcode

The opcode ```pall``` prints all the values on the stack, starting from the top of the stack.

* Usage ```pall```
* Format: see example
* If the stack is empty, don’t print anything

```root@103eae5f6fe8:~/holbertonschool-monty# cat -e 00.m
push 1$
push 2$
push 3$
pall$
root@103eae5f6fe8:~/holbertonschool-monty# ./monty 00.m
3
2
1
root@103eae5f6fe8:~/holbertonschool-monty#:~/monty$ ```

### All Prototypes:
```stack_t *add_dnodeint_end(stack_t **head, const int n);```
```void _push(stack_t **stack, unsigned int line_number);```
```void _pall(stack_t **stack, unsigned int line_number);```
```void _pint(stack_t **stack, unsigned int line_number);```
```void _pop(stack_t **stack, unsigned int line_number);```
```void _swap(stack_t **stack, unsigned int line_number);```
```void _add(stack_t **stack, unsigned int line_number);```
```void _nop(stack_t **stack, unsigned int line_number);```
```void _sub(stack_t **stack, unsigned int line_number);```
```void _div(stack_t **stack, unsigned int line_number);```
```void _mul(stack_t **stack, unsigned int line_number);```
```void _mod(stack_t **stack, unsigned int line_number);```
```void _pchar(stack_t **stack, unsigned int line_number);```
```void _pstr(stack_t **stack, unsigned int line_number);```
```void (*get_opcode_func(char *opcode))(stack_t **, unsigned int);```
```void free_stack(stack_t *stack);```
```int isdigit_string(const char *str);```

```void error_usage(int argc);```
```void error_open_file(FILE *fp, char **argv);```

## Authors
This project was realized by Quentin Rouger (@quentinrouger) - Marc Pourias (@MarcP70) - Christophe Ngan (@Sirothpech)