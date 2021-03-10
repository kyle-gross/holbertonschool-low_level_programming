#include "3-calc.h"
/**
 * op_add - adds 2 integers
 * @a: int 1
 * @b: int 2
 * Return: Sum of a + b
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/**
 * op_sub - subtracts b from a
 * @a: int 1
 * @b: int 2
 * Return: Difference of b - a
 */
int op_sub(int a, int b)
{
	int dif = a - b;

	return (dif);
}
/**
 * op_mul - multiplies 2 integers
 * @a: int 1
 * @b: int 2
 * Return: Product of a * b
 */
int op_mul(int a, int b)
{
	int product = a * b;

	return (product);
}
/**
 * op_div - divides a by b
 * @a: int 1
 * @b: int 2
 * Return: Quotient of a / b
 */
int op_div(int a, int b)
{
	int quo = a / b;

	return (quo);
}
/**
 * op_mod - determines remainder of a / b
 * @a: int 1
 * @b: int 2
 * Return: Remainder of a / b
 */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
