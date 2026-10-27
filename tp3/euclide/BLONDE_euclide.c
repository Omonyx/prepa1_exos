#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int euclide(int m, int n)
{
	int c = m;
	int d = n;
	int r = c % d;
	while (r != 0)
	{
		c = d;
		d = r;
		r = c % d;
	};
	return d;
};
int main(int argc, char **argv)
{
	int m = atoi(argv[1]);
	int n = atoi(argv[2]);
	assert(argc > 2 && m > n);
	printf("Algorithme d'Euclide (PGCD) de %d par %d : %d\n", m, n, euclide(m, n));
	return 0;
};
