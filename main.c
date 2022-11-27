#include <limits.h>
#include <stdio.h>
#include "main.h"
 /**
  * main - tests the codes
  *
  * Return: 0
 */
 int main(void)
 {
	 int len;
	 int len2;
	 unsigned int ui;
	 void *addr;

	 len = _printf("Let's try to printf a simple sentence.\n");
	 len2 = printf("Let's try to printf a simple sentence.\n");
	 
	 ui = (unsigned int)INT_MAX + 1024;
	 addr = (void *)0x7ffe637541f0;

	 /*Test for task 0*/
	 _printf("Character:[%c]\n", 'H');
	 printf("Character:[%c]\n", 'H');
	 _printf("String:[%s]\n", "I am a string !");
	 printf("String:[%s]\n", "I am a string !");
	/*test for task 1*/
	 _printf("Length:[%d, %i]\n", len, len);
	 printf("Length:[%d, %i]\n", len2, len2);
	 _printf("Negative:[%d]\n", -762534);
	 printf("Negative:[%d]\n", -762534);
	 /* Test for task 2*/
	 _printf("%b\n", 98);
	 /* Test for task 3*/
	 _printf("Unsigned:[%u]\n", ui);
	 printf("Unsigned:[%u]\n", ui);
	 _printf("Unsigned octal:[%o]\n", ui);
	 printf("Unsigned octal:[%o]\n", ui);
	 _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	 printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	 /* Test for task 5*/
	 _printf("%S\n", "Best\nSchool");

	 /* Test for task 6*/
	 _printf("Address:[%p]\n", addr);
	 printf("Address:[%p]\n", addr);

	 /* Test for task 13*/
	 _printf("Unknown:[%r]\n");
	 printf("Unknown:[%r]\n");

	 /* Other tests*/
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	 _printf("Len:[%d]\n", len);
	 printf("Len:[%d]\n", len2);
	 return (0);
 }
