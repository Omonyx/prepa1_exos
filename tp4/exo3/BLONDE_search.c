#include <stdio.h>
#include <assert.h>

int *search2(int tab[8], int n, int k)
{
	assert(tab != NULL);
	assert(n >= 0);

	int i = 0;
	int *kn = NULL;

	while (i < n)
	{
		if (tab[i] == k)
		{
			kn = &tab[i];
			i = n;
		};
		i++;
	};

	return kn;
};
int search(int tab[8], int n, int k)
{
	assert(tab != NULL);
	assert(n >= 0);

	int i = 0;
	int kn = -1;

	while (i < n)
	{
		if (tab[i] == k)
		{
			kn = i;
			i = n;
		};
		i++;
	};
	
	return kn;
};
int main(int argc, char **argv)
{
	int tab[8] = {-2e4, -78, -29, 12, 13, 42, 666, 999};

	//assert(search(tab, 8, 666) == 6);
	//assert(search(tab, 8, -6) == -1);
	
	assert(search2(tab, 8, 666) == &tab[6]);
	assert(search2(tab, 8, -6) == NULL);
	
	return 0;
};
