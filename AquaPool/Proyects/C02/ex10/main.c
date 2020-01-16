#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[100] = "abcdef";
	char src[100] = "ghijk";

	//dest = "mamamia";
	//src = "domo";

	printf("My function: %s\n", ft_strlcpy(dest, src, 3));
	printf("Their function: %s\n", strlcpy(dest, src, 3));
}
