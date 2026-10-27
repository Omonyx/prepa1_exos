#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void print_array(int *tab, int n)
{
	assert(n != 0);

	int i = 0;
	
	while (i < n)
	{
		printf("%d ", tab[i]);
		i++;
	};
	printf("\n");

	return;
};
void selection_sort(int *tab, int n)
{
	int i = 0;
	int j = 0;
	int min = 0;

	while (i < n)
	{
		j = i;
		min = i;
		while (j < n)
		{
			if (tab[min] > tab[j])
			{
				min = j;
			};
			j++;
		};
		int temp = tab[i];
		tab[i] = tab[min];
		tab[min] = temp;
		i++;
	};
	print_array(tab, n);

	return;
};
void insertion_sort(int *tab, int n)
{
	int i = 1;
	int j = 0;

	while (i < n)
	{
		j = i - 1;
		while (j >= 0 && tab[j] > tab[i])
		{
			tab[j + 1] = tab[j];
			j--;
		};
		i++;
	};
	print_array(tab, n);

	return;
};
void test_selection()
{
	int tab1[4] = {6, 4, 10, 2};	
	int tab2[12] = {12, 86, 35, 14, 67, 99, 105, 380, 70, 2, 5, 69};
	int tab3[0] = {};
	selection_sort(tab1, 4);
	selection_sort(tab2, 12);
	selection_sort(tab3, 0);
};
int main(int argc, char **argv)
{
	//test_selection();
	int tab1[12] = {12, 86, 35, 14, 67, 99, 105, 380, 70, 2, 5, 69};
	selection_sort(tab1, 12);
	insertion_sort(tab1, 12);
	return 0;
};
