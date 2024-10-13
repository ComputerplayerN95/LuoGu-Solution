#include<stdio.h>
int main()
{
	char date1[10], date2[10];
	gets(date1);
	gets(date2);
	int da1, da2, y1, y2, m, d, t = 0;
	da1 = atoi(date1);
	da2 = atoi(date2);
	y1 = da1 / 10000;
	y2 = da2 / 10000;
	/*printf("%d\n", y1);*/
	for (; y1 <= y2; y1++)
	{
		if ((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0)
		{
			int D[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
			for (m = 0; m <= 11; m++)
			{
				for (d = 1; d <= D[m]; d++)
				{
					int da3 = d + (m+1) * 100 + y1 * 10000;
					
					if (da3 <= da2 && da3>=da1)
					{
						
						char da4[10];
						int_to_str(da3, da4);
						int j = 0;
						for (int i = 0; i < 4; i++)
						{
							
							if (da4[i] == da4[7 - i])j++;
							if (j == 4)t++;
							
						}
					}
					
				}
				
			}
		}
		else
		{
			int D[12] = { 31,22,31,30,31,30,31,31,30,31,30,31 };
			for (m = 0; m <= 11; m++)
			{
				for (d = 1; d <= D[m]; d++)
				{
					int da3 = d + (m + 1) * 100 + y1 * 10000;

					if (da3 <= da2 && da3 >= da1)
					{

						char da4[10];
						int_to_str(da3, da4, 10);
						int j = 0;
						for (int i = 0; i < 4; i++)
						{

							if (da4[i] == da4[7 - i])j++;
							if (j == 4)t++;

						}
					}

				}

			}
		}
		
	}
	printf("%d", t);
	return 0;
}
 int_to_str(int num, char str[])
{
	int i = 0;
	while (num != 0)
	{
		str[i++] = num % 10 + '0';
		num /= 10;
	}
	str[i] = '\0';
	for (int j = 0; j < i / 2; j++)
	{
		char temp = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = temp;
	}
}