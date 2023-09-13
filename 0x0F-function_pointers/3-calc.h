#ifndef CALC_H
#define CALC_H
/**
 * struct op - A struct operative.
 * @op: The op used
 * @f: The associated function.
 */
typedef struct op
{
	char *op;
	int (*f)(int x, int b);
} op_t;

int op_add(int x, int b);
int op_sub(int x, int b);
int op_mul(int x, int b);
int op_div(int x, int b);
int op_mod(int x, int b);
int (*get_op_func(char *s))(int, int);

#endif
