#include <stdio.h>
#include "../ex06/ft_strlen.c"

int main()
{
	char s[] = "hello world\n";

	int n = ft_strlen(s);
	printf("%d (should be 12)\n", n);
}