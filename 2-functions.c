#include "main.h"
#include <math.h>
#include <stdbool.h>

int _numDigits(unsigned long value);
int _ultoa(unsigned long value, char *str, int base);

int _dtostr(double value, char *str, int precision)
{
	int len = 0;
	unsigned long intPart, scaledFraction;
	double fractionalPart;
	int leadingZeros;

	if (value < 0)
	{
		str[len++] = '-';
		value = -value;
	}
	intPart = (unsigned long)value;
	len += _ultoa(intPart, str + len, 10);
	
	if (precision > 0)
	{
		str[len++] = '.';

		fractionalPart = value - intPart;

		scaledFraction = (unsigned long)(fractionalPart * pow(10, precision));
		
		leadingZeros = precision - _numDigits(scaledFraction);
		while (leadingZeros > 0)
		{
			str[len++] = '0';
			leadingZeros--;
		}
		len += _ultoa(scaledFraction, str + len, 10);
	}
	str[len] = '\0';
	return (len);
}

int _ultoa(unsigned long value, char *str, int base)
{
	int len = 0;

	if (value == 0)
	{
		str[len++] = '0';
		str[len] = '\0';
		return (len);
    }

	while (value > 0)
	{
		unsigned long digit = value % base;
		
		if (digit < 10)
		{
			str[len++] = '0' + digit;
		}
		else
		{
			str[len++] = 'a' + (digit - 10);
		}
		value /= base;
	}

	reverse(str, len);

	str[len] = '\0';
	
	return (len);
}

int _numDigits(unsigned long value)
{
	int numDigits = 0;
	
	if (value == 0)
	{
		return 1;
	}

	while (value > 0)
	{
		value /= 10;
		numDigits++;
	}
	return numDigits;
}

/**
 * int _uitoa(unsigned int value, char *str, int base)
 * int _print_formatted(const char *format, ...)
 * void _pad_left(int width, char pad_char)
 * void _pad_right(int width, char pad_char)
 * int _print_hex(unsigned long value, int uppercase)
 */
