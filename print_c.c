#include "main.h"
/**
 *print_c - print a single character
 *
 *@value: arg
 *Return: 1 on success or -1 on fail
 */
int print_c(va_list value)
{
char c;
c = va_arg(value, int);
return (_putchar(c));
}
