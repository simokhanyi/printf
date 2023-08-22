
#include "main.h"

/**
 * get_precision - Calculates the precision
 * @format: a string in which to print the arguments
 * @i: arguments lists to be printed.
 * @list: arguments lists.
 *
 * Return: Should return precision when succesful.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int carr_i = *i + 1;
	int precision = -1;

	if (format[carr_i] != '.')
		return (precision);

	precision = 0;

	for (carr_i += 1; format[carr_i] != '\0'; carr_i++)
	{
		if (is_digit(format[carr_i]))
		{
			precision *= 10;
			precision += format[carr_i] - '0';
		}
		else if (format[carr_i] == '*')
		{
			carr_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = carr_i - 1;

	return (precision);
}
