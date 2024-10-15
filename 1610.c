#include<stdio.h>
int main()
{
	int n, dist;
	int light[100005];
	int td = 0;
	scanf("%d %d", &n, &dist);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &light[i]);
	}
	int y;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (light[j] > light[j + 1])
			{
				y = light[j];
				light[j] = light[j + 1];
				light[j + 1] = y;
			}
		}
	}
	for (int i = 1; i < n-1; i++)
	{
		if (light[i + 1] - light[i - 1] <= dist)
		{
			light[i] = light[i - 1];
			td++;
		}
	}
	printf("%d", td);

	return 0;
}