#include<stdio.h>
int grade[5000005];
int pod[5000005];
int main()
{
	int n = 0, p = 0;
	int x, y, z;
	scanf("%d %d", &n, &p);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &grade[i]);
	}
	for (int i = 0; i < p; i++)
	{
		scanf("%d %d %d", &x,&y,&z);
		pod[x - 1] += z;
		pod[y] -= z;
	}
	int t;
	int min = grade[0] + pod[0];
	for (int i = 1; i < n; i++)
	{
		if (min == 0)break;
		pod[i] += pod[i - 1];
		t = grade[i] + pod[i];
		if (min > t)min = t;
	}
	printf("%d", min);
	return 0;
}