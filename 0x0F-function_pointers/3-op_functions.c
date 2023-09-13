#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - ThisReturns the sum of two numbers.
 * @a: The first numbe in hte case r.
 * @b: The second number in the case
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -This Returns the difference of two no.
 * @a: The first numberin the case
 * @b: The second number int he case
  * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -This  Returns the product of two no
 * @a: The first number in this casse
 * @b: The second number in this case
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -This Returns the division of two no.
 * @a: The first numberinnthis case
 * @b: The second
 *  * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - This returns the remainder of the division of two numbers.
 * @a: The first numbe in this caser.
 * @b: The second number in this cass
  * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

