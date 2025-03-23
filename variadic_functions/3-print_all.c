#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print anything
 * @format: ist of types of arguments passed to the function
 *
 * Return: nil if string = NULL
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str, *separator = "";

va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
i++;
continue;
}
separator = ",";
i++;
}
printf("\n");
va_end(args);

}
