#include<iostream>

#include<deque>

using namespace std;

deque<int>q;

int m, n;

int o = 0;

int imp(int a);

int main()
{

	cin >> m >> n;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		imp(a);
	}
	cout << o;
	return 0;
}
int imp(int a)
{
	for (int i = 0; i < q.size(); i++)
	{
		if (q[i] == a)return 0;
	}
	q.push_back(a);
	o++;
	if (q.size() > m)q.pop_front();
	return 0;
}