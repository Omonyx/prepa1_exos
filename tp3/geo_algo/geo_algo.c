#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct {
	float x;
	float y;
} Float_couple;

float segment_l(Float_couple a, Float_couple b)
{
	return (b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y);
};
char *is_rectangle(Float_couple a, Float_couple b, Float_couple c)
{
	float l_ab = segment_l(a, b);
	float l_ac = segment_l(a, c);
	float l_bc = segment_l(b, c);
	float l_max = l_ab;
	if (l_ac > l_max && l_bc < l_ac)
	{
		if ((l_ab * l_ab + l_bc * l_bc) - l_ac * l_ac < 1e-4)
		{
			return "B";
		};
		return "X";
	} else if (l_bc > l_max)
	{
		if ((l_ab * l_ab + l_ac * l_ac) - l_bc * l_bc < 1e-4)
		{
			return "A";
		};
		return "X";
	} else {
		if ((l_ac * l_ac + l_bc * l_bc) - l_ab * l_ab < 1e-4)
		{
			return "C";
		};
		return "X";
	};
	return "X";
};
int main(int argc, char **argv)
{
	assert(argc > 4);
	if (argc == 5)
	{
		Float_couple a = {atof(argv[1]), atof(argv[2])};
		Float_couple b = {atof(argv[3]), atof(argv[4])};
		printf("%f\n", segment_l(a, b));
	} else if (argc == 7)
	{
		Float_couple a = {atof(argv[1]), atof(argv[2])};
		Float_couple b = {atof(argv[3]), atof(argv[4])};
		Float_couple c = {atof(argv[5]), atof(argv[6])};
		char *angle = is_rectangle(a, b, c);
		if (strcmp(angle, "X") != 0)
		{
			printf("The triangle ABC is right-angled in %s.\n", angle);
		} else {
			printf("The triangle is not right-angled.\n");
		};
	};
	return 0;
};
