#include "main.h"

/**
 * print_hexa - Prints an unsigned number in hexadecimal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexa(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hex_lu(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}
