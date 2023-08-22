#include "main.h"

/**
 * get_width - The width for printing
 * @format: Astring in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: Arguments lists.
 *
 * Return: Should return width when successful.
 */
int get_width(const char *format, int *i, va_list list)
{
	int carr_i;
	int width = 0;

	for (carr_i = *i + 1; format[carr_i] != '\0'; carr_i++)
	{
		if (is_digit(format[carr_i]))
		{
			width *= 10;
			width += format[carr_i] - '0';
		}
		else if (format[carr_i] == '*')
		{
			carr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = carr_i - 1;

	return (width);
}
