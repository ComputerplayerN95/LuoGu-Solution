#include<stdio.h>
int main()
{
	long long n, x;
	long long candy[100005];
	long long id = 0;
	long long eat = 0;
	long long more;
	scanf("%lld %lld", &n, &x);
	scanf("%lld", &candy[0]);
	for (int i = 1; i < n; i++)
	{
		scanf("%lld", &candy[i]);
		if (candy[i] + candy[i - 1] > x)
		{
			more = candy[i] + candy[i - 1] - x;
			if (candy[i] > 0)candy[i] -= more;
			else candy[i - 1] -= more;
			eat += more;
		}
	}
	printf("%lld", eat);

	return 0;
}