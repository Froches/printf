#include "main.h"

/**
 * _puts - function that prints out a string to stdout
 * @str: string to be printed
 * Return: 1 on success and -1 on error
 */
int _puts(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	/* putchar('\n'); */
	return (i);
}

/**
 * _strlen - gets the string length
 * @str: string passed
 * Return: length of string
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

/**
 * reverse - function that reverses a string
 * @str: string to reverse
 * @length: length of string
 * return: returns 1 on success.
 */
int reverse(char* str, int length)
{
	int start = 0;
	int end = length - 1;
	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (1);
}

/**
 * itoa - function that converts an integer to a string
 * @value: value to convert
 * @str: string
 * @base: number base
 * return: returns 0 on success
 */
int _itoa(int value, char* str, int base)
{
	int isNegative, index, remainder;

	if (value == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (1);
	}

	isNegative = 0;
	if (value < 0)
	{
		isNegative = 1;
		value = -value;
	}

	index = 0;
	while (value != 0)
	{
		remainder = value % base;
		str[index++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
		value = value / base;
	}

	if (isNegative)
	{
		str[index++] = '-';
	}

	str[index] = '\0';

	reverse(str, index);

	return (0);
}
