#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: to be checked, it is a pointer to string str
 *
 * Return: void
*/
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; str++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
