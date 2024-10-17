#include <stdio.h>
long long re()
{
	long long x = 0, f = 1;
	char ch;
	ch = getchar();
	while (ch < '0' || ch>'9') {
		if (ch == '-')
			f = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}
int main()
{
	long long n, f, t;
	long long a1, a2;
	long long can = 0;
    scanf("%lld %lld %lld", &n, &f, &t);
    for (long long i = 0; i < n; i++)
    {
        a1 = re();
        a2 = re();
        if (f - t + a1 >= a2)can++;
    }
    printf("%lld", can);
    return 0;
}