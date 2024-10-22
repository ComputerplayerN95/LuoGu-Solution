#include<stdio.h>
#include<algorithm>
int n;
int ice;
int have_eat;
bool change(int mid)
{
	ice = 0;
	have_eat = 0;
	while (mid > 0)
	{
		mid--;
		ice++;
		have_eat++;
		if (ice == 3)
		{
			mid++;
			ice = 0;
		}
	}
	if (have_eat >= n)return true;
	else return false;
}
void eat(int n)
{
	int l = 1, r = n;
	while (l < r)
	{
		int mid = (l + r) / 2;
		if (change(mid))r = mid;
		else l = mid + 1;
	}
	printf("%d", l);
}
int main()
{
	scanf("%d", &n);
	eat(n);
}