#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
* _printf - Prints formatted output to stdout
* @format: Format string
*
* Return: Number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	int count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
		else
		{
			i++;
			count += handle_format(format, &i, args);
		}
	}
	va_end(args);
	return (count);
}
