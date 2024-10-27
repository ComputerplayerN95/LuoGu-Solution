#include<stdio.h>
#include<map>
using namespace std;
int operate;
map<int, map<int, int >>cab;
void save(int x, int y, int z);
void query(int x, int y);
int main()
{
	int n, q;
	int x, y, z;
	scanf("%d %d", &n, &q);
	for (int i = 0; i < q; i++)
	{
		scanf("%d", &operate);
		if (operate == 1)
		{
			scanf("%d %d %d",&x, &y, &z);
			save(x, y, z);
		}
		if (operate == 2)
		{
			scanf("%d %d", &x, &y);
			query(x,y);
		}
	}
	return 0;
}
void save(int x, int y, int z)
{
	cab[x][y] = z;
}
void query(int x, int y)
{
	printf("%d\n", cab[x][y]);
}