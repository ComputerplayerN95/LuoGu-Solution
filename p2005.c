#include<stdio.h>
#include<math.h>
int main()
{
	char c;
	c = getchar();

	printf("  %c  \n", c);
	printf(" %c%c%c  \n", c,c,c);
	printf("%c%c%c%c%c\n", c, c, c,c,c);
	return 0;
}