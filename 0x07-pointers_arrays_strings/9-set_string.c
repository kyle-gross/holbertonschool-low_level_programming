#include "holberton.h"

/**
 * set_string - sets &s1 == *s0
 * @s: address of s1
 * @to: pointer to s0
 * Dereferences address of s1 and assigns it == value of s0
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	/* char **s == &s1 NOT s1!! char *to == s0 */
	/* Use *(s + 0) to dereference address of s1 (stored in **s) */
	/* Assign value of s1 == s0 */
	*(s + 0) = to;
	/* Now s0 and s1 point to the same string */
}
