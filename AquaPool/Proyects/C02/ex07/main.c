#include <stdio.h>

char	*ft_strupcase(char *str);

int main(void)
{
	//char str1[] = "I made it";
	char str1[9];

	str1[0] = 'i';
	str1[1] = 32;
	str1[2] = 'm';
	str1[3] = 'a';
	str1[4] = 'd';
	str1[5] = 'e';
	str1[6] = 32;
	str1[7] = 'i';
	str1[8] = 't';
	str1[9] = '\0';
	printf("The sentence is %s\n", ft_strupcase(str1));
}

/* Also i can recycle my own functions

#include <stdio.h>
#include <string.h>

int main(void) 
{
	char str1[100];

	strncpy(str1, "I made it\0", 100);
	printf("The sentence is %s\n", str1);
}
*/
