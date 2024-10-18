#include <stdio.h>
int main()
{
    int x, y,first,second,finally,test;
    scanf("%d %d", &x, &y);
    for (int i = x; i <= y; i++)
    {
        test = 0;
        for (int j = 2; j < i - 1; j++)
        {
            if (i % j == 0)
            {
                test++;
            }
        }
        first = i / 10;
        second = i % 10;
        finally = second * 10 + first;
        for (int j = 2; j < finally - 1; j++)
        {
            if (finally % j == 0)
            {
                test++;
            }
        }
        if(test == 0)printf("%d\n", i);
    }
    return 0;
}