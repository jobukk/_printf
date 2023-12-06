#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list value);
int print_s(va_list value);
int print_percent(void);


#endif
