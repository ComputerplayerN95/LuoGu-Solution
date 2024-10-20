#include <stdio.h>
#include<math.h>
float c(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float dis1,dis2,dis3,C;
    dis1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    dis2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    dis3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    C = dis1 + dis2 + dis3;
    return C;
}
int main()
{
    float x1, y1, x2, y2, x3, y3,output;
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    output = c(x1, y1, x2, y2, x3, y3);
    printf("%.2f", output);
    return 0;
}