#include<stdio.h>
int main()
{
	double n, sn;
	int k;
	scanf("%d", &k);
	sn = 0;
	for (n = 1;; n++) {
		sn += 1 / n;
		if (sn > k) {
			printf("%d\n", (int)n);
			break;
		}

	}
	return 0;
}