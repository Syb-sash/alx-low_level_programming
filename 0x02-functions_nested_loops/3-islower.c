#include "main.h"

/**
 * _is_lower - check if character is in lowercase.
 * @c: is the char to checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
