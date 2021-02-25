#include "holberton.h"

/**
 * checkprime - checks if number is prime
 * @i: incrementing variable
 * @n: number to check
 *
 * Return: 1 if prime 0 if not prime
 */
int checkprime(int i, int n)
{
	/* If n % 2 == 0 then n is not prime */
	if (n % i == 0)
		return (0);
	/* Check iterations of i */
	if (i * i > n)
		return (1);
	/* Add 1 to iteration - continue testing for prime */
	return (checkprime(i + 1, n));
}

/**
 * is_prime_number - checks if number is prime
 * @n: the number to check
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	/* If less than 2, n = not prime */
	if (n < 2)
		return (0);
	/* Helper function to check if number is prime */
	return (checkprime(2, n));

}
