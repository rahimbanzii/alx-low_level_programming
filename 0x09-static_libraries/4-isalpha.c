#include "main.h"

/**
 * _isalpha-to check for alphabetic character
 * @c:character to be checked
 * Return: 1 if c is a letter,else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
