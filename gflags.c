#include "main.h"

/**
 * get_flags - Calculates available flags
 * @format: a string in which to print the arguments
 * @i: input a parameter.
 * Return: Flag when successful:
 */
int get_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int a, carr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (carr_i = *i + 1; format[carr_i] != '\0'; carr_i++)
	{
		for (a = 0; FLAGS_CH[a] != '\0'; a++)
			if (format[carr_i] == FLAGS_CH[a])
			{
				flags |= FLAGS_ARR[a];
				break;
			}

		if (FLAGS_CH[a] == 0)
			break;
	}

	*i = carr_i - 1;

	return (flags);
}
