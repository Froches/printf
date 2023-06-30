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
	putchar('\n');
	return (1);
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
