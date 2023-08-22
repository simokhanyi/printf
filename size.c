#include "main.h"

/**
 * get_size - The size to cast the argument
 * @format: A string in which to print the arguments
 * @i: Arguments lists to be printed.
 *
 * Return: should return Sizewhen successful.
 */
int get_size(const char *format, int *i)
{
	int carr_i = *i + 1;
	int size = 0;

	if (format[carr_i] == 'l')
		size = S_LONG;
	else if (format[carr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = carr_i - 1;
	else
		*i = carr_i;

	return (size);
}
