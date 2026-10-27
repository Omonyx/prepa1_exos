#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

float exp_naive(int n, float x)
{
	float res = 1;
	int i = 0;
	while (i < n)
	{
		res = res * x;
		i++;
	};
	return res;
};
float exp_rec(int n, float x, float coeff)
{
	if (n == 0)
	{
		return 1;
	} else if (n == 1)
	{
		return x;
	} else 
	{
		return exp_rec(n - 1, x * coeff, coeff);
	}; 
};
int main(int argc, char **argv)
{
	assert(argc == 3);
	int n = atoi(argv[1]);
	float x = atof(argv[2]);
	printf("n=%d\nx=%f\nres1=%f\nres2=%f\n", n, x, exp_naive(n, x), exp_rec(n, x, x));
	return 0;
};
