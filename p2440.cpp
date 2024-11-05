
#include <stdio.h>
long long n, k, max = 0;
long long t[100005];
long long find();
long long cut(long long mid);
int main()
{
	scanf("%lld %lld", &n, &k);
	long long i;
	for (i = 1; i <= n; i++)
	{
		scanf("%lld", &t[i]);
		max += t[i];
	}
	max = max / k;
	if (max >= 1)find();
	else printf("0");
	return 0;
}
long long find()
{
	long long l = 1, r = max, mid;
	while (l < r)
	{
		mid = (l + r + 1) / 2;
		if (cut(mid) >= k)l = mid;
		else r = mid - 1;
	}
	printf("%d", l);
	return 0;
}
long long cut(long long mid)
{
	long long sum = 0, i;
	for (i = 1; i <= n; i++)
	{
		sum += t[i] / mid;
	}
	return sum;
}