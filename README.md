# C - Stack, Queues - LIFO, FIFO
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

### Tasks
#### 0. Prototype: ```stack_t *add_dnodeint_end(stack_t **head, const int n);```
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

#### 1. Prototype: ```unsigned long int hash_djb2(const unsigned char *str);```

#### 2. Prototype: ```unsigned long int key_index(const unsigned char *key, unsigned long int size);```

#### 3. Prototype: ```int hash_table_set(hash_table_t *ht, const char *key, const char *value);```

#### 4. Prototype: ```char *hash_table_get(const hash_table_t *ht, const char *key);```

#### 5. Prototype: ```void hash_table_print(const hash_table_t *ht);```

#### 6. Prototype: ```void hash_table_delete(hash_table_t *ht);```

## Authors
This project was realized by Quentin Rouger (@quentinrouger) - Marc Pourias (@MarcP70) - Christophe Ngan (@Sirothpech)