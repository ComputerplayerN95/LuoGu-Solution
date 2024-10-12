#include<stdio.h>
int main()
{
	int a, b, c, d,e,i;
	e = 8;
	i = 0;
	for (a = 1; a < 8; a++) {
		scanf("%d %d", &b, &c);
		if (b + c > e) {
			i = a;
			e = b + c;
			
			
		}
	}
	printf("%d", i);
	return 0;
}