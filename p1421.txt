#include<stdio.h>
int main()
{
	int a, b, c, p, n;
	scanf("%d %d", &a, &b);
	c = a * 10 + b;
	p = 19;
	for (; p < c;p = p + 19);
	if (p > c)
		n = p / 19 - 1;
	else
		n = p / 19;
	printf("%d", n);
	return 0;
}