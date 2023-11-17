#ifndef _MAIN_H_
#define _MAIN_H_
#include<stdarg.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_dec(va_list args);
int print_int(va_list args);

#endif
