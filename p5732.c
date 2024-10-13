#include<stdio.h>
int main()
{
	int ys[20][20];
	ys[0][0] = 1;
	int x, y,n;
	scanf("%d", &n);
	for (x = 0; x < n; x ++ )
	{
		y = 0;
		for (; y < x + 1; y++)
		{
			if (y == x || y == 0)ys[x][y] = 1;
			else
			{
				ys[x][y] = ys[x - 1][y] + ys[x - 1][y - 1];

			}
			printf("%d ", ys[x][y]);
		}
		printf("\n");
	}
	return 0;
}