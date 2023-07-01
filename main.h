#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

int _putchar(char c);
int _puts(const char *str);
int _strlen(const char *str);
int _printf(const char *format, ...);
int _itoa(int value, char *str, int base);
int reverse(char* str, int length);

#endif /* MAIN_H */
