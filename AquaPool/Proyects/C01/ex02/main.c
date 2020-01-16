#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a = 5;
	b = 7;
	ft_swap(&a, &b);

	printf("The integer a was 5 now is: %d\n", a);
	printf("The integer b was 7 now is: %d\n", b);
}
