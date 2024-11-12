#include<iostream>

#include<deque>

#include<algorithm>

using namespace std;

deque<long long>q;

long long place[300005];

int main()
{
	long long n, m, k;
	cin >> n >> m >> k;
	long long x;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		place[i] = x;
	}
	sort(place, place + n);
	for (int i = 0; i < n; i++)
	{
		q.push_back(place[i]);
	}
	long long pl = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		if (x <= 2)
		{
			
			int o;
			cin >> o;
			
			if (x == 1)
			{
				pl += o;
				while (!q.empty()&& q.back() + pl > k)
				{
					q.pop_back();
				}
			}
			else if (x == 2)
			{
				pl -= o;
				while (!q.empty() && q.front() + pl < -k)
				{
					q.pop_front();
				}
			}
		}
		if (x == 3)cout << q.size() << '\n';
	}
	return 0;
	
}