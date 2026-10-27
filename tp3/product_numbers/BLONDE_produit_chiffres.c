#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int product_numbers(int n)
{
	int number = n;
	int r = 0;
	int res = 1;
	while (number > 1)
	{
		r = number % 10;
		res *= r;
		number = (number - r) / 10;
	};
	return res;
};
int main(int argc, char **argv)
{
	assert(argc > 1);
	int n = atoi(argv[1]);
	printf("The product of %d is %d\n", n, product_numbers(n));
	return 0;
};
