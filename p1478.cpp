#include<stdio.h>
#include<algorithm>
using namespace std;
struct tree
{
	int hig;
	int p;
}app[5005];
bool cmp(const tree&a,const tree&b)
{
	return a.p<b.p;
}
int main()
{
	int n,s;
	scanf("%d %d",&n,&s);
	int a,h;
	scanf("%d %d",&a,&h);
	int i; 
	int cou = 0;
	for(i = 0;i<n;i++)
	{
		scanf("%d %d",&app[i].hig,&app[i].p);
	}
	sort(app,app+n,cmp);
	for(i = 0;i<n;i++)
	{
		if(s - app[i].p>=0&&app[i].hig <= a + h )
		{
			cou++;
			s -= app[i].p;
		}
	}
	printf("%d",cou);
	return 0;
}
