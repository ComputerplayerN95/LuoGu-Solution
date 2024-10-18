#include <stdio.h>
int main()
{
    int n;
    int num[1000002];
    int input;
    int max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        if (num[input] >= 1)num[input]++;
        else
        {
            num[input] = 1;
            if (max < input)max = input;
        }
    }
    for (int i = 0; i <= max; i++)
    {
        if (num[i] < 0)num[i] = 0;
        printf("%d\n", num[i]);
    }
        return 0;
}