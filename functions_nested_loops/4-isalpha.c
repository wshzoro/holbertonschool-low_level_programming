#include "main.h"

/**
*_isalpha - cheacks for alphabetic character
* @c - character to check
* Return: 1 if c is the letter (lowercase or uppercase),0 otherwise
*/

int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
    else
    return (0);
}