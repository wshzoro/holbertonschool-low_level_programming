#include "main.h"
#include <stdio.h>

/**
* check_prime - Vérifie si un nombre est premier de manière récursive
* @n: Le nombre à vérifier
* @div: Le diviseur en cours de test
*
* Return: 1 si n est premier, 0 sinon
*/
int check_prime(int n, int div)
{
if (div * div > n)
return (1);
if (n % div == 0)
return (0);
return (check_prime(n, div + 1));
}
/**
* is_prime_number - returns 1 if the input integer is a prime number
*@n: number to check
* Return: otherwise return 0.
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}
