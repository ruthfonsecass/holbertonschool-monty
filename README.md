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
### 1. pint
Implement the pint opcode.

**The pint opcode**

The opcode pint prints the value at the top of the stack, followed by a new line.

* Usage: pint
* If the stack is empty, print the error message L<line_number>: can't pint, stack empty, followed by a new line, and exit with the status EXIT_FAILURE
```
julien@ubuntu:~/monty$ cat bytecodes/06.m 
push 1
pint
push 2
pint
push 3
pint
julien@ubuntu:~/monty$ ./monty bytecodes/06.m 
1
2
3
julien@ubuntu:~/monty$
```
### 2. pop
Implement the pop opcode.

**The pop opcode**

The opcode pop removes the top element of the stack.

* Usage: pop
* If the stack is empty, print the error message L<line_number>: can't pop an empty stack, followed by a new line, and exit with the status EXIT_FAILURE
```
julien@ubuntu:~/monty$ cat bytecodes/07.m 
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
julien@ubuntu:~/monty$ ./monty bytecodes/07.m 
3
2
1
2
1
1
julien@ubuntu:~/monty$
```
### 3. swap
Implement the swap opcode.

**The swap opcode**

The opcode swap swaps the top two elements of the stack.

* Usage: swap
* If the stack contains less than two elements, print the error message L<line_number>: can't swap, stack too short, followed by a new line, and exit with the status EXIT_FAILURE
```
julien@ubuntu:~/monty$ cat bytecodes/09.m 
push 1
push 2
push 3
pall
swap
pall
julien@ubuntu:~/monty$ ./monty bytecodes/09.m 
3
2
1
2
3
1
julien@ubuntu:~/monty$
```
### 4. add
Implement the add opcode.

**The add opcode**

The opcode add adds the top two elements of the stack.

* Usage: add
* If the stack contains less than two elements, print the error message L<line_number>: can't add, stack too short, followed by a new line, and exit with the status EXIT_FAILURE
* The result is stored in the second top element of the stack, and the top element is removed, so that at the end:
The top element of the stack contains the result
The stack is one element shorter
```
julien@ubuntu:~/monty$ cat bytecodes/12.m 
push 1
push 2
push 3
pall
add
pall

julien@ubuntu:~/monty$ ./monty bytecodes/12.m 
3
2
1
5
1
julien@ubuntu:~/monty$
```
### 5. nop
Implement the nop opcode.

**The nop opcode**

The opcode nop doesn’t do anything.

* Usage: nop









