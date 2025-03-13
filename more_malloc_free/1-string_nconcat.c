#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concates two strings
 * @s1: first string
 * @s2: second string
 * @n : head of s2
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i = 0, j = 0;
char *nconcat;
unsigned int b;
unsigned int k = 0, l = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;

if (n >= (unsigned int)j)
b = i + n + 1;

else
b = i + j + 1;

nconcat = malloc(b *sizeof(char));
if (nconcat == NULL)
return (NULL);

while (s1[k] != '\0')
{
nconcat[k] = s1[k];
k++;
}
while (l < n && s2[l] != '\0')
{
nconcat[k] = s2[l];
k++;
l++;
}
nconcat[k] = '\0';
return (nconcat);

}
