#include<stdio.h>
int main()
{
	int n;
	int a[10005];
	int total = 0;
	int step = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		total += a[i];
	}
	int arr = total / n;
	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] < arr)
		{
			a[i] -= arr - a[i - 1];
			a[i - 1] = arr;
			step++;
		}
		if (a[i - 1] > arr)
		{
			a[i] += a[i - 1] - arr;
			a[i - 1] = arr;
			step++;
		}
	}
	printf("%d", step);
	return 0;
}