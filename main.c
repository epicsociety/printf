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
	/* unsigned int ui;
	 void *addr; */

	 len = _printf("Let's try to printf a simple sentence.\n");
	 len2 = printf("Let's try to printf a simple sentence.\n");
	 
	/* ui = (unsigned int)INT_MAX + 1024;
	 addr = (void *)0x7ffe637541f0;*/

	/*test for task 1*/
	 _printf("Length:[%d, %i]\n", len, len);
	 printf("Length:[%d, %i]\n", len2, len2);
	 _printf("Negative:[%d]\n", -762534);
	 printf("Negative:[%d]\n", -762534);
	 /* Test for task 2*/
	 _printf("%b\n", 98);
	
	 return (0);
 }
