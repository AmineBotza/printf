#include"main.h"
/**
  * _printf - print to std output formatted text
  * putss - prints the number of stings
  *@format: format specifier
  *@c: sting input
  *Return: number of bytes printed
  */
int putss(char *c);
int _printf(const char *format, ...)
{
	unsigned int i, count_stg, count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))

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
			i++;
		}
		else if (format[i + 1] == 's')
		{
			count_stg = putss(va_arg(args, char *));
			i++;
			count += count_stg;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
	}
	va_end(args);
	return (count);
}
