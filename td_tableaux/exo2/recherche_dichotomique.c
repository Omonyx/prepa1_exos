#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int binary_search(int l_tab, int *tab, int k)
{
	int min = 0;
	int max = l_tab - 1;
	int kn = -1;
	while (min <= max)
	{
		int i = 0.5 * (min + max);
		if (tab[i] > k)
		{
			max = i - 1;
		} else if (tab[i] < k)
		{
			min = i + 1;
		} else
		{
			kn = i;
			min = max + 1;
		};
	};
	return kn;
};
int main(int argc, char **argv)
{
	int tab[6] = {-1, 2, 4, 5, 23, 32};
	int k = 32;
	
	printf("%d\n", binary_search(6, tab, k));
	return 0;
};
