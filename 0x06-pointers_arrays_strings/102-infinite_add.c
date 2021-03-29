#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - finds length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * infinite_add - adds large numbers
 * @n1: first number in string form
 * @n2: 2nd number in string form
 * @r: sum of two numbers stored in a string
 * @size_r: size of buffer for new string
 * Return: 0 if failure, or new string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, ii, t1, t2, idx = 0, sum = 0, carry = 0;
	char temp[2000];

	for (i = _strlen(n1) - 1, ii = _strlen(n2) - 1; ; i--, ii--)
	{
		t1 = n1[i] - '0';
		t2 = n2[ii] - '0';
		if (ii < 0)
			t2 = 0;
		if (i < 0)
			t1 = 0;
		if (i < 0 && ii < 0)
			break;
		sum = t1 + t2 + carry;
		temp[idx] = sum % 10 + '0';
		carry = sum / 10;
		idx++;
	}
	temp[idx] = '\0';
	if (carry > 0)
		r[0] = carry + '0', i = 1;
	else
		i = 0;
	for (ii = _strlen(temp) - 1; ii >= 0; i++, ii--)
	{
		r[i] = temp[ii];
		if (i + 1 >= size_r)
			return (0);
	}
	r[i] = '\0';
	return (r);
}
