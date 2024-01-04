#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * Function prototypes
 */
void err(int error_code, ...);
void more_err(int error_code, ...);
void string_err(int error_code, ...);

stack_t *create_node(int n);
void free_nodes(void);

void open_file(char *file_name);
void read_file(FILE *fd);
int parse_line(char *buffer, int line_number, int format);
void find_func(char *opcode, char *value, int ln, int format);
void call_func(instruction_t func, char *op, char *val, int ln, int format);

void push_to_stack(stack_t **new_node, unsigned int line_number);
void print_stack_nodes(stack_t **stack, unsigned int line_number);
void pop_stack_top(stack_t **stack, unsigned int line_number);
void print_stack_top(stack_t **stack, unsigned int line_number);

void add_to_queue(stack_t **new_node, unsigned int ln);
void multiply_stack_nodes(stack_t **stack, unsigned int line_number);
void modulo_stack_nodes(stack_t **stack, unsigned int line_number);

void print_ascii_char(stack_t **stack, unsigned int line_number);
void print_ascii_str(stack_t **stack, unsigned int line_number);
void rotate_left(stack_t **stack, unsigned int line_number);
void rotate_right(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */

