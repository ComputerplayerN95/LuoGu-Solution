#include<stdio.h>
int main()
{
	char t[6];
	gets(t);
	int i;
	int j = 0;
	for (i = 0;; i++)
	{
		
		if (t[i] == NULL)
		{
			break;
		}
		else
		{
			if (t[i] != ' ')j++;
		}
	}
	printf("%d", j);
	return 0;
}