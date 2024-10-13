#include<stdio.h>
int main()
{
	int l, m,u,v;
	l = 1;
	int i = 0;
	int tree[10000];
	scanf("%d %d", &l, &m);
	for (; i < l + 1; i++)
	{
		tree[i] = 1;

	}
	for (int t = 1; t <= m; t++)
	{
		scanf("%d %d", &u, &v);
		for (; u <= v; u++)
		{
			if (tree[u - 1] != 0)
			{
				tree[u - 1] = 0;
				l--;
			}
		}
	}

	printf("%d\n", l + 1 );
	

	return 0;
}