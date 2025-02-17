#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));  /* Seed the random number generator */
n = rand() - RAND_MAX / 2;  /* Generate a random number */
/* Calculate the last digit of the number */
int last_digit = n % 10;
/* Handle negative last digit */
if (last_digit < 0)
{
last_digit = -last_digit;  /* Make sure the last digit is positive */
}
printf("Last digit of %d is %d and is ", n, last_digit);
/* Determine the output based on the last digit */
if (last_digit > 5)
{
printf("greater than 5\n");
}
else if (last_digit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}

