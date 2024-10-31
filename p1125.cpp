#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
char c[105];
char goal;
int cou[105];
int main()
{
	int i = 0;
	do
	{
		i++;
		c[i] = getchar();
	}
 	while(c[i] != '\n');
 	i--;
 	int alp=0;
 	for(int j = 1;j<=i;j++)
 	{
 		if(c[j] == '0')continue;
 		goal = c[j];
 		alp++;
 		for(int k = j;k<=i;k++)
 		{
 			if(c[k] == goal)
 			{
 				cou[j]++;
 				c[k] = '0';
		 	}
			 
		}
	}
	sort(cou+1,cou+i+1); 
	int suo = cou[i]-cou[i-alp+1];
	if(suo == 0||suo == 1)
		{
			printf("No Answer\n%d",0);
			return 0;
		}
	
	for(int i = 2;i <= sqrt(suo);i++ )
	{
		if(suo % i == 0)
		{
			printf("No Answer\n%d",suo);
			return 0;
		}
	}
	printf("Lucky Word\n%d",suo);
	return 0;
	
}