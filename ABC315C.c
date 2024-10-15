#include<stdio.h>
int f[300005][2];
int main()
{
	int n;
	int max = 0;
	int id;
	int y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &f[i][0], &f[i][1]);
		if (max < f[i][1])
		{
			id = f[i][0];
			max = f[i][1];
			y = i;
		}
	}
	int max1 = 0;
	int max2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (i != y)
		{
			if (f[i][0] == id)
			{
				if (f[i][1] / 2 + max > max1)max1 = f[i][1] / 2 + max;
			}
			if (f[i][0] != id)
			{
				if (f[i][1] + max > max2)max2 = f[i][1] + max;
			}
		}
	}
	if (max1 > max2)printf("%d", max1);
	else printf("%d", max2);
	return 0;
}