#include <stdio.h>
#include "../ex02/ft_swap.c"

int main()
{
	int a = 2;
	int b = 123;

	int *pa = &a;
	int *pb = &b;

	printf("before swap: %d, %d\n", a, b);

	ft_swap(pa, pb);

	printf("after swap: %d, %d\n", a, b);
}