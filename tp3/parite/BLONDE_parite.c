#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *parite(int n)
{
	if (n % 2 == 0)
	{
		return "pair";
	};
	return "impair";
};
char *positive(int n)
{
	if (n > 0)
	{
		return "positive";
	} else if (n == 0)
	{
		return "null";
	};
	return "negative";
};
int main(int argc, char **argv)
{
	assert(argc > 1);
	int n = atoi(argv[1]);
	printf("%d is a %s and %s number.\n", n, parite(n), positive(n));
	return 0;
};
