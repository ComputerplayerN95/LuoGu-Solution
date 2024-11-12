#include<iostream>

#include<deque>

using namespace std;

deque<int>q;

deque<int>ma;

int n, k;
int Max[2000005];
int main()
{
	cin >> n >> k;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		q.push_back(x);
		while (!ma.empty() && q.size() - 1 - ma.front() > k - 1)
		{
			ma.pop_front();
		}
		while (!ma.empty() && q[ma.back()] < q.back())
		{
			ma.pop_back();
		}
		ma.push_back(q.size() - 1);
		Max[q.size() - 1] = q[ma.front()];
	}
	for (int i = k - 1; i < n; i++)
	{
		cout << Max[i] << '\n';
	}
	return 0;

}