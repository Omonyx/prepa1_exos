#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void show_t(int *t)
{
	int i = 0;

	while (i < 32)
	{
		printf("%d", t[i]);
		i++;
	};
	printf("\n");

	return;
};
int number_of_bits(int n)
{
	int b = 1;
	int numb = n;
	
	while (numb / 2 != 0)
	{
		numb /= 2;
		b++;
	};
	
	return b;
};
void dec2bin_uint(int n)
{
	int tab[32];
	int max = number_of_bits(n);
	int num_bits = 0;
	
	while (num_bits != max)
	{
		tab[31 - num_bits] = n % 2;
		n /= 2;
		num_bits++;
	};
	show_t(tab);
	
	return;
};
void dec2bin_int(int n)
{
	if (n > 0)
	{
		dec2bin_uint(n);
	} else
	{
		int tab[32];
		int max = number_of_bits(n);
		int num_bits = 0;

		while (num_bits != max)
		{
			tab[31 - num_bits] = -n % 2;
			n /= 2;
			num_bits++;
		};

		int i = 0;

		if (tab[max - 1] == 0)
		{
			tab[max - 1] = 1;
			while (tab[max - 2] == 0 && max > 0)
			{
				tab[max - 2] = 1;
				max--;
			};
			tab[max - 2] = 0;
		} else
		{
			tab[max - 1] = 0;
			while (tab[max - 2] == 1 && max > 0)
			{
				tab[max - 2] = 0;
				max--;
			};
			tab[max - 2] = 1;
		};
		while (i < 32)
		{
			if (tab[i] == 1)
			{
				tab[i] = 0;
			} else
			{
				tab[i] = 1;
			};
		};
		show_t(tab);
	};

	return;
};
int main(int argc, char **argv)
{
	assert(argc > 1);
	int n = atoi(argv[1]);
	dec2bin_int(n);
	return 0;
};
