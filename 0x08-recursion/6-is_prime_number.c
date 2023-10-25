#include "main.h"
/**
* prime_helper - A helper function to determine primality.
* @n: The number to check for primality.
* @i: The current divisor being checked.
*
* Return: 1 if n is prime, otherwise 0.
*/
int prime_helper(int n, int i)
{
if (n <= 1)
return (0);
if (i == n)
return (1);
if (n % i == 0)
return (0);
return (prime_helper(n, i + 1));
}
/**
* is_prime_number - Returns 1 if the input integer is a prime number.
* @n: The number to check for primality.
*
* Return: 1 if n is prime, otherwise 0.
*/
int is_prime_number(int n)
{
return (prime_helper(n, 2));
}
