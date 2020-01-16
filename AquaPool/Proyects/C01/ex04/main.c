#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;
	int c;

	a = 777;
	b = 8;

	ft_ultimate_div_mod(&a, &b);

	printf("The quotient is: %d\n", a);
	printf("The remainder is: %d\n", b);
}
