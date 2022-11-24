#include "main.h"
#include <stdio.h>

/**
  * print_rot13 - prints a string in rot13
  * @list: arguments for _printf
  * @func: ter to the struct flags in which we turn the flags on
  * Return: number of characters printed
  */

int print_rot13(va_list list, param_func *func)
{
	int i, index;
	int count = 0;

	char array[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(list, char *);
	(void)func;

	i = 0;
	index = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			index = str[i] - 65;
			count += _putchar(array[index]);
		}
		else
			 count += _putchar(str[i]);
		i++;
	}
	return (count);
}
