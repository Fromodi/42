#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

/*

void	ft_putstr(char *str)
{
	int i;

	i  = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
<<<<<<< HEAD
*/


//argv = { "./a.out", "mono", "mano", "meco"}
