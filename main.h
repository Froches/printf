#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _putchar(char c);
int _puts(const char *str);
int _strlen(const char *str);
int parser(const char *format, conver_t funct_list[], va_list args);
int _printf(const char *format, ...);
int _itoa(int value, char *str, int base);

#endif /* MAIN_H */
