#include <stdio.h>
#include <algorithm>
using namespace std;
int n, m;
int prize1[100005];
int prize;
int prize2[100005];
int id = 0;
bool compare(int a, int b)
{
	return a < b;
}
void find(int prize)
{
	int l = 1, r = m, mid;
	while (l < r)
	{
		mid = l + (r - l) / 2;
		if (prize2[mid] >= prize)r = mid;
		else l = mid +1;
	}
	if(prize2[l] == prize)
	{
		printf("%d ", prize);
	}
}
int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &prize1[i]);
	}
	for (int i = 1; i <= m; i++)
	{
		scanf("%d",&prize2[i]);
		
	}
	sort(prize2+1, prize2 + m + 1, compare);
	for (int i = 1; i <= n;i++)
	{
		find(prize1[i]);
	}
	return 0;
}