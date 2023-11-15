#include"main.h"
/**
  * _printf - print to std output formatted text
  * putss - prints the number of bytes
  *@format: format specifier
  *@c: string input
  *Return: number of bytes printed
  */
int putss(char *c);
int _printf(const char *format, ...)
{
	unsigned int i, count_stg, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
		}
		else if (format[i + 1] == 's')
		{
			count_stg = putss(va_arg(args, char *));
			i++;
			count += (count_stg - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
