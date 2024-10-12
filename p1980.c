#include<stdio.h>
int main()
{
	int a, b,c,d,e = 0;
	scanf("%d %d", &a, &b);
	for (c = 1; c <= a; c++) {
		d = c;
		for(;d >= 1;)
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