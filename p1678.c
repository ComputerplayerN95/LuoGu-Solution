#include <stdio.h>
#include<math.h>
int m, n, b;
long long unhappy = 0;
int a[100005];

void quick_sort(int a[], int low, int high) {
	if (low < high) {
		int pivot = a[high];
		int i = (low - 1);

		for (int j = low; j <= high - 1; j++) {
			if (a[j] < pivot) {
				i++;
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

		int temp = a[i + 1];
		a[i + 1] = a[high];
		a[high] = temp;

		int pivotIndex = i + 1;

		quick_sort(a, low, pivotIndex - 1);
		quick_sort(a, pivotIndex + 1, high);
	}
}
int school(int b)
{
	int x = 1, y = m;
	
	while (x < y && y - x > 1)
	{
		int mid = x + (y - x) / 2;
		if (a[mid] == b)return 0;
		else if (a[mid] > b)
		{
			y = mid;
			mid = x + (y - x) / 2;
		}
		else if (a[mid] < b)
		{
			x = mid;
			mid = x + (y - x) / 2;
		}
	}
	int c = (abs(a[y] - b) < abs(a[x] - b)) ? abs(a[y] - b) : abs(a[x] - b);
	return c;
}
int main()
{
	scanf("%d %d", &m, &n);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d", &a[i]);
	}
	quick_sort(a,1,m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b);
		unhappy += school(b);
	}
	printf("%lld", unhappy);
	return 0;
}