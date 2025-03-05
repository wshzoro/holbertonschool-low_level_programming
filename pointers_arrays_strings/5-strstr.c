#include "main.h"
#include <stdio.h>

/**
* _strstr - locates a substring
* @haystack: string where we find
* @needle: substrings where we find the first occurence
* Return: to the beginning of the located substring
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
char *needle = "hello, world";
char *haystack = "world";
char *result;

result = *_strstr(*haystack, *needle);
printf("%s\n", result);
}

