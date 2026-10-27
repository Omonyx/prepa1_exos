#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char **argv)
{
	int n = -5; // Declaration d'une variable contenant un entier et en lui assignant la valeur de -5
	double x = 2.51; // Declaration d'une variable contenant un double (float sur 64bits) et en lui assignant la valeur de 2.51
	char c = 'w'; // Declaration d'une variable contenant un caratere et en lui assignant la valeur de w

	int *pn = &n; // Declaration d'une variable contenant un pointeur vers un entier et en lui assignant l'adresse memoire de n
	double *px = &x; // Declaration d'une variable contenant un pointeur vers un double et en lui assignant l'adresse memoire de x
	char *pc = &c; // Declaration d'une variable contenant un pointeur vers un caratere et en lui assignant l'adresse memoire de c
	
	*pc = 'g'; // Assignemant de la valeur g a la valeur que designe l'adresse memoire stocké dans pc

	printf("n : %d %p\nx : %f %p\nc : %c %p\n", n, pn, x, px, c, pc); // Les adresses memoires sont quasiment les memes jusqu'au 2 derniers carateres
	return 0;
};
