#include<iostream>

#include<deque>

using namespace std;

deque<int>q;

deque<int>mi;

int n, m;
int Min[1000005];
int main()
{
	cin >> n >> m;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		q.push_back(x);
		while (!mi.empty() && q.size() - 1 - mi.front() > m - 1)
		{
			mi.pop_front();
		}
		while (!mi.empty() && q[mi.back()] > q.back())
		{
			mi.pop_back();
		}
		mi.push_back(q.size() - 1);
		Min[q.size() - 1] = mi.front();
	}
	for (int i = m - 1; i < n; i++)
	{
		cout << q[Min[i]] << '\n';
	}
	return 0;

}