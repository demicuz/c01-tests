#include <stdio.h>
#include "../ex08/ft_sort_int_tab.c"

int main()
{
	int a[] = {15, 13, 14, 11, 12};
	ft_sort_int_tab(a, 5);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);


	int c[] = {42};
	ft_sort_int_tab(c, 1);
	printf("%d\n", c[0]);

	int d[] = {};
	ft_sort_int_tab(d, 0);
}