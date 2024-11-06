#include<stdio.h>
int n;
int a[100005] = {0};
int m;
struct len
{
	int l;
	int r;
};
int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int A;
		scanf("%d",&A);
		a[i] = a[i - 1] + A;
	}
	scanf("%d", &m);
	struct len l;
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &l.l, &l.r);
		printf("%d\n", a[l.r] - a[l.l - 1]);
	}
	return 0;
}