#include<stdio.h>
int main(void)
{
	int n = 0, m = 0;
	int N[10001];
	int i = 0;
	scanf("%d",&n);
	for (; i < n; i++)
	{
		scanf("%d", &N[i]);
	}
	for (int x = 0; x < n; x++)
	{
		int c = 0;
		for (int y = 0; y < n; y++)
		{
			if (c != 0)break;
			for (int z = 0; z < y; z++)
			{
				if (N[x] == N[y] + N[z])

				{
					m++;
					c = 1;
					break;
				}
				
			}
		}
	}
	printf("%d", m);
	return 0;
}