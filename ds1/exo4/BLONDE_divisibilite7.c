#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *is_divisible(int n)
{
	while (n > 10)
	{
		n = abs(n / 10 - 2 * (n % 10));
	};
	if (n == 0 || n == 7)
	{
		return "is divisible";
	} else {
		return "is not divisible";
	};
};
int main(int argc, char **argv)
{
	assert(argc > 1);
	int n = abs(atoi(argv[1])); // On pourrait utiliser un unsigned int pour augmenter la taille maximale de l'entier interpretable par l'algorithme.
	printf("%d %s by 7\n", n, is_divisible(n));
	return 0;
};
