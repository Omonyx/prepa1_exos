#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

double get_step(int n)
{
	double step = 1.0;
	int i = 0;
	
	while (i < n)
	{
		step /= 10;
		i++;
	};

	return step;
};
void build_tab(double a, double b, double step, double *tab)
{
	int num_elt = ((b - a) / step) + 1;
	int i = 1;

	tab[0] = a;
	tab[num_elt - 1] = b;

	while (i < num_elt - 1)
	{
		tab[i] = a + i * step;
		i++;
	};

	return;
};
double f(double x)
{
	return cos(x * M_PI);
};
double zero_dicho(double a, double b, int n)
{
	double step = get_step(n);
	double *tab = malloc((size_t)(((b - a) / step) + 1) * sizeof(*tab));
	int max = (int)((b - a) / step);
	double res = 0;
	int min = 0;
	int c = 0;

	if (tab != NULL && f(a) * f(b) < step)
	{
		build_tab(a, b, step, tab);
		
		while ((f(tab[c]) > step || f(tab[c]) < -step) && min <= max)
		{
			c = 0.5 * (max + min);
		
			if ((f(tab[c]) < step) ^ (f(a) > 0))
			{
				min = c + 1;
			} else if ((f(tab[c]) > -step) ^ (f(a) > 0))
			{
				max = c - 1;
			};
		};
		res = tab[c];
	};
	free(tab);

	return res;
};
int main(int argc, char **argv)
{
	assert(argc > 3);
	double a = atof(argv[1]);
	double b = atof(argv[2]);
	int n = atoi(argv[3]);
	assert(n >= 0 && n < 9 && a < b);

	printf("f(%f) = 0 (with %d digits)\n", zero_dicho(a, b, n), n);
	
	return 0;
};
