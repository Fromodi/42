#include <unistd.h>

void	ft_putstr(char *str);

int main(void)
{
	ft_putstr("These violent delights have violent ends.");
	write(1, "\n", 1);
}
