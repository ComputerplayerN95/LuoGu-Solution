#include<stdio.h>
int main()
{
	int a, b, c = 0, f = 1;
	scanf("%d", &a);
	for (b = 1;;b++ )
	{
		c += b;
		if (c >= a)
			break;
		f++;
		
	}
	if (f % 2 == 0)
	{
		printf("%d/%d", f - (c - a), (f + 1) - (f - (c - a)));
	}
	else
		printf("%d/%d", (f + 1) - (f - (c - a)), f - (c - a));
	return 0;
}