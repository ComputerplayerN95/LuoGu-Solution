#include<stdio.h>
int main()
{
	int n = 0,l = 0,j,x = 0;
	int h[10005];
	scanf("%d", &n);
	for (j = 0; j < n; j++)
	{
		scanf("%d", &h[j]);
	}
	
	for (int i = 1; i < n; i++)
	{
		if (h[i] > h[i - 1]&&l == 0)
		{
			
		}
		if (h[i] < h[i - 1])
		{
			
			l = i;
		}
		if (h[i] > h[i - 1] && l != 0)
		{
			x++;
			l = 0;
			
		}
		
	}
	printf("%d", x);
	return 0;
}