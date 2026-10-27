#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void show(int t[5], int n)
{
	int i = 0;
	while (i < n)
	{
		printf("(%d)-", t[i]);
		i++;
	};
	printf("\n");
	return;
};
void selection_sort(int t[5], int n)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	int min = 0;
	while (i < n)
	{
		j = i;
		while (j < n)
		{
			if (t[min] > t[j])
			{
				min = j;
			};
			j++;
		};
		temp = t[i];
		t[i] = t[min];
		t[min] = temp;
		i++;
	};
	show(t, n);
	return;
};
int main(int argc, char **argv)
{
	int tab[5] = {2, 8, 6, -3, 9};
	selection_sort(tab, 5);
	return 0;
};
