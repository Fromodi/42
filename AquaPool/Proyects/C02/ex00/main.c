#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char dest[100] = "Goodbye";
	char *src;

	src = "Hello there";

	printf("My function says: %s\n", ft_strcpy(dest, src));
	printf("Their function says: %s\n", strcpy(dest, src));
}
