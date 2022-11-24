

#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
void _puts(char *str);
int _printf(const char *format, ...);
int (*check_format(const char *format))(va_list);
int print_c(va_list c);
int print_s(va_list s);
int print_b(va_list b);
int print_x(va_list x);
int print_S(va_list S);


/**
 * struct prints - structure to print the various types
 * @s: type to print
 * @f: function to print
*/
typedef struct prints
{
	char *a;
	int (*f)(va_list);
} print_a;



#endif
