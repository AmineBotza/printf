#include"main.h"
/**
  * _printf - print to std output formatted text
  *
  *@format: format specifier
  *
  *Return: number of bytes printed
  */
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
