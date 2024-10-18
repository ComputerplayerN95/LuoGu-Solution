#include <stdio.h>
int main()
{
    long long a, b, n;
    long long  x;
    scanf("%lld %lld %lld", &a, &b, &n);
    x = b;
    while (x < a)
    {
        if (n == 1)break;
        x += b;
        n -= 1;
    }
    if (x > a)printf("%lld", x - b);
    else printf("%lld", x);
    return 0;
}