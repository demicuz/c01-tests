#include <stdio.h>
#include "../ex07/ft_rev_int_tab.c"

int main()
{
	int a[] = {12, 13, 14, 15, 16};
	ft_rev_int_tab(a, 5);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

	int b[] = {12, 13, 14, 15};
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);


	int c[] = {42};
	ft_rev_int_tab(c, 1);
	printf("%d\n", c[0]);

	int d[] = {};
	ft_rev_int_tab(d, 0);
}