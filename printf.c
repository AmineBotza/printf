#include"main.h"
/**
  * _printf - mimics printf
  *@format: identifier
  *Return: integer
  */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_37}
		};

		va_list args;
		int i = 0, len = 0;

		va_start(args, format);
		if (format == NULL || (format[0] == '%' && format[i] == '\0'))
			return (-1);
}
