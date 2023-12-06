#include "main.h"
/**
 *print_s - print a string
 *
 *@value: va_list with string
 *
 *Return: number of characters in the string
 */
int print_s(va_list value)
{
char *s = va_arg(value, char *);
int length = 0;
if (s == NULL)
	s = ("null");
while (*s)
{
_putchar(*s);
s++;
length++;
}
return (length);
}
