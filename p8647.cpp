#include<stdio.h>
int n, k;
int h[100005][2];
int max = 0;
bool cut(int mid)
{
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		if (h[i][0] >= mid && h[i][1] >= mid)
		{
			num += (h[i][0] / mid) * (h[i][1] / mid);
		}
	}
	if (num >= k)return true;
	else return false;
}
int find(int k)
{
	int l = 1, r = max;
	while (l < r)
	{
		int mid = (l + r + 1) / 2;
		if (cut(mid))l = mid;
		else r = mid - 1;
	}
	printf("%d", l);
	return 0;
}
int main()
{
	int choco = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		int choco = 0;
		scanf("%d %d", &h[i][0], &h[i][1]);
		choco = (h[i][0] < h[i][1]) ? h[i][0] : h[i][1];
		if (max < choco)max = choco;
	}
	find(k);
	return 0;
}