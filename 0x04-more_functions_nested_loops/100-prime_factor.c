#include <stdio.h>
#include <math.h>

/**
 * main - find and print the largest prime factor of 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int n = 612852475143;
unsigned long int max_prime = -1;
unsigned long int i;

while (n % 2 == 0)
{
max_prime = 2;
n /= 2;
}

for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
max_prime = i;
n = n / i;
}
}

if (n > 2)
max_prime = n;

printf("%lu\n", max_prime);
return (0);
}
