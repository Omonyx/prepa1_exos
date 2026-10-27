#include <stdio.h>
#include <assert.h>

int max_array(double tab[8], int n)
{
	assert(tab != NULL);
	assert(n >= 0);

	int i = 1;
	int max = 0;
	while (i < n)
	{
		if (tab[max] < tab[i])
		{
			max = i;
		};
		i++;
	};

	return max;
};
double avg_array(double tab[8], int n)
{
	assert(tab != NULL);
	assert(n >= 0);
	
	int i = 0;
	double moy = 0;
	while (i < n)
	{
		moy += tab[i];
		i++;
	};
	
	return moy / n;
};
void init_array(double *tab, int n)
{
	assert(tab != NULL);
	assert(n >= 0);
	
	int i = 0;
	while (i < n)
	{
		*(tab + i) = 0.0;
		i++;
	};

	return;
};
void print_array(double tab[8], int n)
{
	assert(tab != NULL);
	assert(n >= 0);
	
	int i = 0;
	while (i < n)
	{
		printf("%lf\n", tab[i]);
		i++;
	};
	
	return;
};
int main(int argc, char **argv)
{
	double tab[8] = {-1.5e-2, 5.3, 2, -1.3, 4.21, 7.8, 0, -1e3}; // Tableau de 8 floatants ou chaque case memoire font 8 octets
	
	// print_array(tab, 8); // TESTE affichage d'un tableau
	
	/*printf("%lf\n", avg_array(tab, 8)); // TESTE calcul de la moyenne
	init_array(tab, 8); // TESTE Mettre tout les elements a 0
	printf("%lf\n", avg_array(tab, 8));*/ // Reessaye de faire la moyenne avec tout les elements a 0 : TESTE avg_array 2
	
	//printf("%d\n", max_array(tab, 8)); // TESTE recherche du max

	return 0;
};
