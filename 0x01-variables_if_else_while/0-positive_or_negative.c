#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main -Print whether number is positive or negative
 *
 * Return: 0 (if successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zrero\n", n);
	else
		printf("%d is negetive\n", n);
	return (0);
}
