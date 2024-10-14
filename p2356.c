#include<stdio.h>
int matrix[10005][10005];
int main()
{
	
	int adress_x[10010];
	int adress_y[10010];
	int id = 0;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &matrix[i][j]);
			if (matrix[i][j] == 0)
			{
				adress_x[id] = j;
				adress_y[id] = i;
				id++;
			}
		}
	}
	int count;
	int max = 0;
	int x;
	int y;
	if (id == 0)printf("Bad Game!");
	else
	{
		for (int i = 0; i < id; i++)
		{
			x = adress_x[i];
			y = adress_y[i];
			count = 0;
			for (int j = 0; j < n; j++)
			{
				count += matrix[y][j] + matrix[j][x];

			}
			if (count > max)max = count;
		}
		printf("%d", max);
	}
	
	return 0;
}