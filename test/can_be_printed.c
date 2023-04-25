#include "main.h"

/**
 * is_prnt - Evaluates if a char is printable
 * @c: Char to be evaluated.
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_prnt(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
