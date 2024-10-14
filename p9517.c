#include<stdio.h>
int waterbot[100005];
int water[100005];
int main()
{
	int n;
	int count;
	int id = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &waterbot[i]);
		if (waterbot[i] == 1)
		{
			water[id] = i;
			id++;
		}
		
	}
	if (id == 0)count = 0;
	else count = water[id - 1] - water[0] + 1;
	printf("%d",count);
	return 0;
}