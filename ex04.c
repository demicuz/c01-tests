#include <stdio.h>
#include "../ex04/ft_ultimate_div_mod.c"

int main()
{
	int a = 12;
	int b = 10;

	ft_ultimate_div_mod(&a, &b);

	printf("div: %d (should be 1)\n", a);
	printf("mod: %d (should be 2)\n", b);
}