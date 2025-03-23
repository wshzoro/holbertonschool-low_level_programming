#include "3-calc.h"

/**
 * main - Entry point, performs simple operations
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, or an error code
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

operation = get_op_func(argv[2]);

if (operation == NULL)
{
printf("Error\n");
return (99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}

printf("%d\n", operation(num1, num2));
return (0);
}
