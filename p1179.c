#include<stdio.h>
int main()
{
	int a, b, c, d, e = 0,f;
	b = 2;
	scanf("%d %d", &a,&f);
	for (c = a; c <= f; c++) {
		d = c;
		for (; d >= 1;)
		{
			if (d % 10 == b)
			{
				e++;
			}
			d /= 10;
		}

	}
	printf("%d", e);
	return 0;
}