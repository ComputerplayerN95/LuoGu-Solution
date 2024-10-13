#include<stdio.h>
int main()
{
	int l,w,a,b,s = 0,r = 0;
	scanf("%d %d", &l, &w);
	for (a = 1; a <= l; a++)
	{
		for (b = 1; b <= w; b++)
		{
			if(a == b)
			{
				s += (l + 1 - a) * (w + 1 - b);
			}
			else
				r += (l + 1 - a) * (w + 1 - b);

		}	
			
				
	}
	printf("%d %d", s, r);
	return 0;
}
