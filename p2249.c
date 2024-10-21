#include <stdio.h>
#include<math.h>
int m, n,b;
long long unhappy = 0;
int a[100005];

void sort(int a[]) 
{
	for (int i = 1; i < m; i++)
	{
		int v;
		for (int j = i + 1; j < m+1; j++)
		{
			if (a[i] > a[j])
			{
				v = a[i];
				a[i] = a[j];
				a[j] = v;
			}
		}
	}
}
int school(int b)
{
	int x = 1, y = m;
	int mid = x + (y - x) / 2;
	while (x < y && y - x > 1)
	{
		if (a[mid] == b)return 0;
		else if (a[mid] > b)
		{
			y = mid;
			mid = x + (y - x) / 2;
		}
		else if (a[mid] < b)
		{
			x = mid;
			mid = x + (y - x) / 2;
		}
	}
	int c = (abs(a[y] - b) < abs(a[x] - b)) ? abs(a[y] - b) : abs(a[x] - b);
	return c;
}
int main()
{
	scanf("%d %d", &m, &n);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b);
		unhappy += school(b);
	}
	printf("%lld", unhappy);
	return 0;
}