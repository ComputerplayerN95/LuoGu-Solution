#include<stdio.h>
int main()
{
	int apple[10];
	int a = 0;
	int t = 0;
	scanf("%d %d %d %d %d %d %d %d %d %d", &apple[0], &apple[1], &apple[2], &apple[3], &apple[4], &apple[5], &apple[6], &apple[7], &apple[8], &apple[9]);
	scanf("%d", &t);
	for (int j = 0; j < 10; j++)
	{
		if (apple[j] <= t + 30)a++;
	}
	printf("%d", a);

	return 0;
}