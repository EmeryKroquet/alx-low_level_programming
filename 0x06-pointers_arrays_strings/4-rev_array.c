#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: pointer of array int
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *init, *final;
	int tmp = 0;

	init = a;
	final = a;
	n -= 1;
	while (i < n)
		i += 1;
	while (j <= i)
	{
		tmp = *(init + j);
		*(init + j) = *(final + i);
		*(final + i) = tmp;
		j++;
		i--;
	}
}
