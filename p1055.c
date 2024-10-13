#include<stdio.h>

int main()
{
	char t[14];
	gets(t);
	int i;
	int j = 1;
	int n,c=0;
	for (i = 0;i<12; i++)
	{
		if (t[i] !='-')
		{
			n = t[i] - '0';
			c += n * j;
			j++;
		}
	}
	int m = c % 11;
	char o;
	
	if (m != 10)o = m + '/0';
	else
		o = 'X';
	if (t[12] == o)printf("Right");
	else
	{
		if (c % 11 == 10)
		{
			t[12] = 'X';
			
		}
		else
		{
			t[12] = o;
		}
		printf("%s", t);
	}

	return 0;
}