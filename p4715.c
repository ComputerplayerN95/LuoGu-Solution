#include<iostream>

#include<math.h>

using namespace std;

struct tree
{
	int id;
	int p;
	struct tree* left;
	struct tree* right;
};
int n;

int a = 0;

struct tree* leaf[3000];

void planttree(int n);

int cp(int a);

int main()
{
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		a += pow(2, i);
	}
	planttree(1);
	int lum = 1;
	for (int i = a - pow(2, n) + 1; i <= a; i++)
	{
		leaf[i]->id = lum++;
		cin >> leaf[i]->p;
	}
	cp(1);
	if (leaf[1]->id == leaf[2]->id)cout << leaf[3]->id;
	else
	{
		cout << leaf[2]->id;
	}
	return 0;
}

void planttree(int n)
{
	leaf[n] = (struct tree*)malloc(sizeof(struct tree));
	leaf[n]->id = n;
	leaf[n]->p = 0;
	if (2 * n + 1 <= a)
	{
		planttree(2 * n);
		planttree(2 * n + 1);
		leaf[n]->left = leaf[2 * n];
		leaf[n]->right = leaf[2 * n + 1];
	}
}
int cp(int a)
{
	if (leaf[a]->p == 0)
	{
		cp(2 * a + 1);
		cp(2 * a);
		leaf[a]->p = leaf[2 * a + 1]->p > leaf[2 * a]->p ? leaf[2 * a + 1]->p : leaf[2 * a]->p;
		leaf[a]->id = leaf[2 * a + 1]->p > leaf[2 * a]->p ? leaf[2 * a + 1]->id : leaf[2 * a]->id;
	}
	return 0;
}