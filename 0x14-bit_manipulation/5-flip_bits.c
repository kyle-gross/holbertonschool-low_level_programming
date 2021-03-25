#include "holberton.h"
/**
 * countSetBits - counts the bits that flip
 * @n: the flippin number
 * Return: count of bit's flipped
 */
unsigned int countSetBits(unsigned long int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
/**
 * flip_bits - returns required number of bits to flip
 * @n: first number
 * @m: second number
 * Return: number of bits to flip to change the number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return countSetBits(n ^ m);
}
