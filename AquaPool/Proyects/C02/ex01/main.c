#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest[100] = "Goodbye";
	char *src;

	src = "Hello there";

	printf("My function says: %s\n", ft_strncpy(dest, src, 3));
	printf("Their function says: %s\n", strncpy(dest, src, 3));
}
