#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: pointer to reverse
 *
 */

void rev_string(char *s)
{
    int i, r;
    char temp;

    r = strlen(s) - 1;

    for (i = 0; i < r; i++, r--)
    {
        temp = s[i];
        s[i] = s[r];
        s[r] = temp;
    }
}

