#include<stdio.h>
int main()
{
	int player[6][12];
	int dp[6][12];
	int min = 1000;
	int p;
	int time = 0;
	int rest = 25;
	int hst[6] = {1,1,1,1,1};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			
			if (j == 0)
			{	
				player[i][0] = 0;
				dp[i][0] = 0;
			}
			else
			{
				scanf("%d", &player[i][j]);
				dp[i][j] = player[i][j] - player[i][j - 1];
				if (min > player[i][1])
				{
					min = player[i][1];
					p = i;
				}
			}
		}
	}
	for (int i = 1; i < 11; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int cp = hst[j];
			if (j != p)
			{
				if (dp[p][i] > dp[j][cp])
				{
					p = j;
					i = hst[p];
				}
			}
		}
		time += dp[p][i];
		rest -= 1;
		hst[p]++;

		if (rest == 0)
		{
			i = 11;
		}

	}
	here:
	printf("%d\n", time);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", hst[i]-1);
	}
	return 0;
}