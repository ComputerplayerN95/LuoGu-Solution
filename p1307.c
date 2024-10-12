#include<stdio.h>
#include<math.h>
int main()
{
	int f,r,e,a,f1;
	r = 0;
	e = 0;
	a = -1;
	scanf("%d", &f);
	f1 = f;
	while(f1 != 0)
	{
		f1 /= 10;
		a++;


	}
	while(f != 0)
	{
		r = f % 10;
		
		e += r * pow(10,a);
		a--;
		f /= 10;
		
	}
	printf("%d", e);
	return 0;
}