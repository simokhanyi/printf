#include "main.h"

/**
 * is_printable - Evaluates if a character can be ptinted.
 * @c: Chaacter evaluated
 * Return: 1 if c is printable, 0 when c is not printable
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append asskick in hexadecimal code to buffer
 * @buffer: Array of characterz.
 * @i: Index at which it start TO append.
 * @ascii_code: ASSKICK CODE.
 * Return: Should return 3 when successful
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa form according to ASCII code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifies if a char is a digit
 * @c: Character evaluated
 *
 * Return: 1 if c is a digit, 0 when its not a digit
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Casts a number to the specified size
 * @num: Number casted.
 * @size: Num showing the type to be casted
 * Return: Cast value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Casts a number to the specified size
 * @num: Number casted
 * @size: Num showing the type to be casted
 * Return: Cast value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
