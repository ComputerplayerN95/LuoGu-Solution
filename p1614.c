#include<stdio.h>

int main()
{
	int n,m,a[3005];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int t = 0;
	for (int j = 0; j < m; j++)
	{
		t += a[j];
	}
	int min = t;
	for (int i = 1; i < n - m+1; i++)
	{
		t = 0;
		
		for (int j = 0; j < m; j++)
		{
			t += a[i + j];
		}

		if (t < min)min = t;
			
	}
	printf("%d", min);
	return 0;
}