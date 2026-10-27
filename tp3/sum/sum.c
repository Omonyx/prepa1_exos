#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int sum(int length, char **tab)
{
	int i = 1;
	int res = 0;
	while (i < length)
	{
		res += atoi(tab[i]);
		i++;
	};
	return res;
};
int main(int argc, char **argv)
{
	assert(argc > 1);
	printf("La somme de ces %d entiers est égales a : %d\n", argc - 1, sum(argc, argv));
	return 0;
};
