#include<stdio.h>
int main()
{
	int pn,a1,a2,a3,p1,p2,p3,pri1,pri2,pri3,mi;
	int min(int x, int y, int z);
	int prise(int x, int y, int z);
	
	scanf("%d\n%d %d\n%d %d\n%d %d", &pn,&a1,&p1, &a2, &p2, & a3, &p3);
	pri1 = prise(pn, a1, p1);
	pri2 = prise(pn, a2, p2);
	pri3 = prise(pn, a3, p3);
	mi = min(pri1, pri2, pri3);
	printf("%d", mi);
	return 0;
}
int prise(int x, int y, int z)
{
	int pri,i;
	i = x % y;
	if (i == 0)
		pri = x / y * z;
	else
		pri = (x / y + 1) * z;
	return pri;	
}
int min(int x, int y, int z)
{
	int mi;
	if (x > y)
		mi = y;
	else
		mi = x;
	if (mi > z)
		mi = z;
	return mi;
}