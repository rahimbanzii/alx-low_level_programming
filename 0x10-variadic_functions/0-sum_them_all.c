#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -To Return the sum of all its paramters.
 * @n:no of paramters passed to the function.
 * @...:  variable number of parameters to calculate the sum of.
 * Return: If n == 0 - 0.
 *         else - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
