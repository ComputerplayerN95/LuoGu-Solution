#include<stdio.h>
int main()
{
	int a[1005][1005];
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int t;
	for (int d = 1; d <= k; d++)
	{
		t = 0;
		
			for (int j = 0; j < d; j++)
			{
				for (int i = 0; i < n; i++)
				{
					if (a[i][j] == d)
					{
						t++;
						break;
					}
				}
			}

		printf("%d ", t);
	}
	return 0;
}