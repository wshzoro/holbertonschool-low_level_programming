
#include "3-calc.h"

/**
 * main - Performs simple operations
 * @argc: The number of arguments
 * @argv: Array of arguments
 * Return: 0 if successful, otherwise an error code
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

op_func = get_op_func(argv[2]);

if (op_func == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", op_func(num1, num2));

return (0);
}
