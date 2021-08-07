#include <stdio.h>
#include "../ex03/ft_div_mod.c"

int main()
{
	int a = 12;
	int b = 10;

	int div, mod;

	ft_div_mod(a, b, &div, &mod);

	printf("div: %d (should be 1)\n", div);
	printf("mod: %d (should be 2)\n", mod);
}