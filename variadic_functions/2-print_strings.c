#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: if separator is null don't print it
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");

if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);

}
