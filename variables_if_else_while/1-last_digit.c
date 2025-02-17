#include <stdio.h>
#include <stdlib.h> /* For rand and abs functions*/
#include <time.h> /* For srand function*/

int main(void)
{
    int n;
    int last_digit;

    srand(time(0)); /* Initialize the random number generator */
    n = rand() - RAND_MAX / 2; /* Generate a random number and assign it to n */

    last_digit = abs(n) % 10; /* Get the last digit of the number using the absolute value */

    /* Print the result with appropriate message */
    printf("Last digit of %d is %d and is ", n, last_digit);

    if (last_digit > 5)
    {
        printf("greater than 5");
    }
    else if (last_digit == 0)
    {
        printf("0");
    }
    else
    {
        printf("less than 6 and not 0");
    }

    printf("\n");

    return 0;
}
