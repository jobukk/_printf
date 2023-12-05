#include "main.h"
/**
 *_putchar - wrtting char c to stdout
 *
 *@s: char to print
 *Return: 1 on success
 */
int _putchar(char s)
{
int std = 1, byte = 1, written;
written = write(std, &s, byte);

if (written == -1)
{
return (-1);
}
return (1);
}
