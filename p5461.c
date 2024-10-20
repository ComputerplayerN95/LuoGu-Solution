#include <stdio.h>
#include<math.h>
int matrxi[1055][1055];
void segmentation(int a)
{
    int b = a;
    while (b > 1)
    {
        int l = b / 2;
        for (int x = 0; x < a; x += b)
        {
            for (int y = 0; y < a; y += b)
            {
                if (matrxi[x][y] != 0)
                {
                    for (int x1 = x; x1 < x + l; x1++)
                    {
                        for (int y1 = y; y1 < y + l; y1++)
                        {
                            matrxi[x1][y1] = 0;
                        }
                    }
                }

            }
        }
        b = l;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", matrxi[i][j]);
        }
        printf("\n");
    }
}
void pardon(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrxi[i][j] = 1;
        }
    }
    segmentation(n);

}

int main()
{
    int n,m;
    scanf("%d", &m);
    n = pow(2, m);
    pardon(n);
    return 0;
}