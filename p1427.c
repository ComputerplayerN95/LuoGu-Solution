#include<stdio.h>
int main() {
    int i, a[101];
    for (i = 0;; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0)
            break;
    }
    int count = i;
    for (i = count - 1; i >= 0; i--)
        printf("%d ", a[i]);
}
