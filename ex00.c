#include <stdio.h>
#include "../ex00/ft_ft.c"

int main()
{
	int n = 0;
	int *p = &n;
	ft_ft(p);

	printf("%d\n", n);
}