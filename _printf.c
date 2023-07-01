#include "main.h"

/**
 * _printf - function that customizes the printf function
 * @format: the format list
 * Return: the printed chars
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length;

	va_start(args, format);
	length = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						char c = (char)va_arg(args, int);

						length += _putchar(c);
						break;
					}
				case 's':
					{
						char *str = va_arg(args, char *);

						length += _puts(str);
						break;
					}
				case 'd':
				case 'i':
					{
						int value = va_arg(args, int);
						char buffer[20];
						int len = _itoa(value, buffer, 10);
						length += _puts(buffer);
						length += len;
						break;
					}
				case '%':
					{
						length += _putchar('%');
						break;
					}
		default:
					break;
			}
		} else
		{
			length += _putchar(*format);
		} format++;
	} va_end(args);
	return (length);
}
