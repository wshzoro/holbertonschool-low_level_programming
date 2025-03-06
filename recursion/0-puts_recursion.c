#include "main.h"

/**
* _puts_recursion - pritns a string
* @s: string to print
*
* Return: followed by a new line
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar ('\n');
return;
}
putchar (*s);
_puts_recursion(s++);
}
