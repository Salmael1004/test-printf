#include "main.h"

/**
 * print_hexadecimal_upper - Prints an unsign num in upper hexa notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexadecimal_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hex_lu(types, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));
}
