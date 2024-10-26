#include<stdio.h>
int n;
int map[23][23];
int main()
{
	scanf("%d", &n);
	int stepx = (1 + n)/2;
	int stepy = 1;
	int num = 1;
	map[stepy][stepx] = num++;
	for(;num<=(n*n);num++)
	{
		if (stepx == n)stepx = 1;
		else stepx += 1;
		if (stepy == 1)stepy = n;
		else stepy -= 1;
		if (map[stepy][stepx] != 0)
		{ 
			if (stepx == 1)stepx = n;
			else stepx -= 1;
			if (stepy == n)stepy = 1;
			else stepy += 1;
			if (stepy == n)stepy = 1;
			else stepy += 1;
		}
		map[stepy][stepx] = num;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	return 0;

}
