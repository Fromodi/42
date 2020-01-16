#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char str1[] = "I mAdE it";
/*
char str1[9];

	str1[0] = 'I';
	str1[1] = 32;
	str1[2] = 'm';
	str1[3] = 'A';
	str1[4] = 'd';
	str1[5] = 'E';
	str1[6] = 32;
	str1[7] = 'i';
	str1[8] = 'T';
	str1[9] = '\0';

*/
	printf("The sentence is %s\n", ft_strlowcase(str1));
}


//42 Way up


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
