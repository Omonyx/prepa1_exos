#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int sum_numbers(int n)
{
	int number = n;
	int r = 0;
	int res = 0;
	while (number > 1)
	{
		r = number % 10;
		res += r;
		number = (number - r) / 10;
	};
	return res;
};
int main(int argc, char **argv)
{
	assert(argc > 1);
	int n = atoi(argv[1]);
	printf("The sum of %d's numbers is %d\n", n, sum_numbers(n));
	return 0;
};
