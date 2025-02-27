#include "main.h"
#include <stdio.h>

/**
 * rev_string- reverses a string
 * @s: pointer to reverse
 * 
 */
void rev_string(char *s)
{
    int l = 0;
    int r = strlen(s) - 1;
    char t;
    while (s[r] !='\0')
    {
        r++;
    }
    r--;
    while (l < r)
{
    t = s[l];
    s[l] = s[r];
    s[r] = t;

    l++;
    r--;
}
}
