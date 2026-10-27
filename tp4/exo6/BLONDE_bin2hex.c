#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

const char HEXA[16] = "0123456789ABCDEF";

void show_hexa(char *tab, int n)
{
	assert(n > 0);
	
	int i = 0;

	while (i < n)
	{
		printf("%c", tab[i]);
		i++;
	};
	printf("\n");

	return;
};
void show_int(int *tab, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d ", tab[i]);
		i++;
	};
	printf("\n");
	
	return;
};
char bin41hex(int *tab, int n)
{
	int index = 0;
	int exp = 8;
	int i = n;

	while (i < n + 4)
	{
		index += tab[i] * exp;
		exp /= 2;
		i++;
	};

	return HEXA[index];
};
int get_length(char *tab)
{
	int n = 0;
	
	while (tab[n] != '\0')
	{
		n++;
	};

	return n;
};
void bin2hex(char *tab_c)
{
	int tab_i[16];
	char hex[5];
	int i = 0;
	int j = 0;

	while (j < 16)
	{
		tab_i[j] = tab_c[j] - '0';
		j++;
	};
	while (i < 4)
	{
		hex[i] = bin41hex(tab_i, i * 4);
		i++;
	};
	hex[4] = '\0';
	show_hexa(hex, 4);

	return;
};
void bin2hex_mieux(char *tab_c)
{
	int n = get_length(tab_c);
	int h = 0;

	while (n % 4 != 0)
	{
		h++;
		n++;
	};

	int *tab_i = malloc((size_t)n * sizeof(*tab_i));
	char *hex = malloc((size_t)((n / 4) + 1) * sizeof(*hex));
	int i = 0;
	int j = 0;
	
	if (tab_i != NULL && hex != NULL)
	{
		while (j < h)
		{
			tab_i[j] = 0;
			j++;
		};
		while (j < n)
		{
			tab_i[j] = tab_c[j - h] - '0';
			j++;
		};
		while (i < (n / 4))
		{
			hex[i] = bin41hex(tab_i, i * 4);
			i++;
		};
		hex[n / 4] = '\0';
		show_hexa(hex, i + 1);
		free(tab_i);
		free(hex);
	};

	return;
};
int main(int argc, char **argv)
{
	assert(argc > 1);

	//bin2hex(argv[1]);
	bin2hex_mieux(argv[1]);

	return 0;
};
