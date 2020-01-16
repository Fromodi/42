#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 17;
	b = 4;

	ft_div_mod(a, b, &div, &mod);

	printf("The quotient is: %d\n", div);
	printf("The remainder is: %d\n", mod);
}
