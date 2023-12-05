#include "main.h"

int _printf(const char *format, ...)
{
va_list args;
int i, print_char;
print_char = 0;
va_start(args, format);

for (i = 0; format && format[i]; i++)
{
if (format[i] == '%' && format[i + 1])
{
i++;
switch (format[i])
{
	case 'c':
		print_char += print_c(args);
		break;
	case 's':
		print_char += print_s(args);
		break;
	case '%':
		print_char += print_percent();
		break;
	default:
		_putchar('%');
		_putchar(format[i]);
		print_char += 2;
		break;	
}

}
else
{
_putchar(format[i]);
print_char++;
}
}
va_end(args);
return print_char;
}
