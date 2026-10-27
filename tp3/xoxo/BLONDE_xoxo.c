#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void pyramid_x(int n)
{
	int i = 0;
	int j = 0;
	while (i < n)
	{
		j = 0;
		while (j < i + 1)
		{
			printf("x");
			j++;
		};
		printf("\n");
		i++;
	};
};
void pyramid_o(int n)
{
	int i = 0;
	int j = n;
	int k = 0;
	while (i < n)
	{
		j = n - i;
		k = 0;
		while (k < i)
		{
			printf(" ");
			k++;
		};
		while (j > 0)
		{
			printf("o");
			j--;
		};
		printf("\n");
		i++;
	};
};
int main(int argc, char **argv)
{
	assert(argc > 1);
	int n = atoi(argv[1]);
	pyramid_x(n);
	pyramid_o(n);
	return 0;
};
