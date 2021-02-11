#include <stdio.h>
#include <math.h>

/**
 *
 */

int main(void)
{
	long int n = 612852475143;
	int i, largest_factor = -1;

	while (n % 2 == 0)
	{
		largest_factor = 2;
		n /= 2;
	}
	/* Increase by 2 to get only odd numbers */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
	}
	if (n > 2)
		largest_factor = n;

	printf("%d\n", largest_factor);

	return (0);
}
