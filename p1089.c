#include<stdio.h>
int sum = 0;
int a = 0,c = 0,b= 0;
int t = 1;

int main()
{
	for (int i = 0; i < 12;i++)
	{
		a += 300;
		scanf("%d", &b);
		if (a < b)
		{
			t = 0;
			printf("-%d", i + 1);
			break;
		}
		else
		{
			a -= b;
			c = a / 100;
			sum += c * 100;
			a %= 100;
		}
	}
	if (t == 1)
	{
		
		printf("%d", (int)(sum + sum*0.2)+a);
	}
	return 0;
}