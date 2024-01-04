# Stacks, Queues - LIFO, FIFO
## Objective
The goal of this project is to create an interpreter for Monty ByteCodes files.
## Description
The Monty 0.98 is a scripting language that is first compiled into Monty byte codes. It relies on a unique stack, with specific instructions to manipulate it.
##  Requirements
* Allowed editors: vi, vim, 
* All your files will be compiled on **Ubuntu 20.04 LTS** using **gcc**.
* All your files should end with a new line
* No more than 5 functions per file.
* You are allowed to use the C standard library
* You are expected to do the tasks in the order shown in the project
## Compilation command
``` gcc -Wall -Werror -Wextra -pedantic *.c -o monty ```
## Instructions
### Task 0. push,pall
Implement the push and pall opcodes.

**The push opcode**

The opcode push pushes an element to the stack.

* Usage: push <int>
_ where <int> is an integer
* if <int> is not an integer or if there is no argument given to push, print the error message L<line_number>: usage: push integer, followed by a new line, and exit with the status EXIT_FAILURE
_ where is the line number in the file
* You won’t have to deal with overflows. Use the atoi function
**The pall opcode**

The opcode pall prints all the values on the stack, starting from the top of the stack.

* Usage pall
* Format: see example
* If the stack is empty, don’t print anything
```
julien@ubuntu:~/monty$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
julien@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
julien@ubuntu:~/monty$
```
###






