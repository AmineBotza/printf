#include "main.h"

int _printf(const char *format, ...)
{
	int chara_print = 0;

	va_list list_args;

	if (va_list == NULL)
	return (-1);

	va_start(list_args, format);

	while (*format)
	{
		if (*format != '%')
		{
		write(1, format, 1);
		chara_print++;
		}
		else
		{
			format++;
		if (*format == '\0')
		break;
		if (*format == 'c')
		{
			char c = va_arg(list_args, int);

			write(1, &c, 1);
			chara_print++;
		}
		else if (*format == '%')
		{
			write(1, format, 1);
			chara_print++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(list_args, char*);
			int str_len = 0;

			while (str[str_len] != '\0')
				str_len++;
			write(1, str, str_len);
			chara_print += str_len;
		}
		format++;
		}
	va_end(list_args);
	return (chara_print);
	}
}
