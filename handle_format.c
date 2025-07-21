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
