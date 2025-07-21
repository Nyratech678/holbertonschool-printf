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

#include "main.h"

/**
 * handle_format - Gère les formats %c, %s, %%
 * @format: La chaîne format
 * @i: Position actuelle dans la chaîne (sera modifiée)
 * @args: Liste des arguments variables
 * Return: nombre de caractères imprimés
 */
int handle_format(const char *format, int *i, va_list args)
{
	int count = 0;

	if (format[*i] == 'c')
	{
		char c = va_arg(args, int);

		write(1, &c, 1);
		count++;
	}
	else if (format[*i] == 's')
	{
		char *str = va_arg(args, char *);
		int j = 0;

		if (str == NULL)
			str = "(null)";
		while (str[j])
		{
			write(1, &str[j], 1);
			count++;
			j++;
		}
	}
	else if (format[*i] == '%')
	{
		write(1, "%", 1);
		count++;
	}
	else
	{
		write(1, "%", 1);
		write(1, &format[*i], 1);
		count += 2;
	}

	return (count);
}

