#include<stdio.h>
int main()
{
	int i, j;
	char a[110];
	char b;
	gets(a);
	for (i = 0;; i++)
	{
		if (a[i] == '\0')break;
		else 
		{
			if(a[i] > 90)a[i] = a[i] - 32;
		}


	}
	printf("%s", a);
	return 0;
}
