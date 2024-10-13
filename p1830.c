#include<stdio.h>
int main()
{
    int n, m, x, y,xp,yp, map[105][105],lun[105][105];
    int x1, y1, x2, y2, a, b;
    scanf("%d %d %d %d", &n, &m, &x, &y);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            map[i][j] = 0;
        }
    }
    for (int i = 0; i < x; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (a = x1; a <= x2; a++)
        {
            for (b = y1; b <= y2; b++)
            {
                map[a][b]++;
                lun[a][b] = i+1;
            }
        }

    }
    for (int i = 0; i < y; i++)
    {
        scanf("%d %d", &xp, &yp);
        if (map[xp][yp] != 0)
        {
            printf("Y %d %d\n", map[xp][yp], lun[xp][yp]);
        }
        if (map[xp][yp] == 0)   printf("N\n");
     
    }
    return 0;
}