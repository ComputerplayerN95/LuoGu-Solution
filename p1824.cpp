#include<stdio.h>
#include<algorithm>
using namespace std;
int n,c;
int N[100005];
int r;
bool cmp(int a,int b)
{
	return a < b;
}
bool check(int x)
{
	int last_cow = 1;
	int cow_num = 1;
	for (int i = 2; i <= n; i++)
	{
		if (N[i] - N[last_cow] >= x)
		{
			cow_num++;
			last_cow = i;
		}
	}
	if (cow_num >= c)return true;
	else return false;
}
void find(int r)
{
	int l = 1;
	while (l<r)
	{
		int mid = (l +r+1) / 2;
		if (check(mid))l = mid;
		else r = mid-1;
	}
	printf("%d", l);
}
int main()
{
	scanf("%d %d", &n, &c);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &N[i]);
	}
	sort(N + 1, N + n + 1, cmp);
	r = N[n]-N[1];
	find(r);
	return 0;
}