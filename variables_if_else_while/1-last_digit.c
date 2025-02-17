#include <stdio.h>
#include <stdlib.h> // for abs()

int main(void)
{
    int n;
    int last_digit; // Move declaration to the top

    // Randomly assign a value to n (this is typically done with rand() in a full program)
    n = rand() - RAND_MAX / 2;

    last_digit = abs(n) % 10; // Get the last digit using absolute value to handle negatives

    // Print the result
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
