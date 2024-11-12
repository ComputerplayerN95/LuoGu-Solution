#include<iostream>

#include<deque>

using namespace std;

deque<int>q;

deque<int>ma;

deque<int>mi;

int in;



int n, k;

int Max[1000001], Min[1000001];
void lim(void);
int main()
{
	cin >> n >> k;

	int a, b;

	for (int i = 0; i < n; i++)
	{
		cin >> in;
		q.push_back(in);
		lim();	
	}

	for (int i = k-1; i < n; i++)
	{
		cout << Min[i]<<' ';
	}
	cout << '\n';
	for (int i = k-1; i < n; i++)
	{
		cout << Max[i] << ' ';
	}
	return 0;
}
void lim(void)
{
	while (!ma.empty() && q.size()-1 - ma.front() >= k)
	{
		ma.pop_front();
	}
	while (!ma.empty() && q[ma.back()] < q.back())
	{
		ma.pop_back();
	}
	ma.push_back(q.size()-1);
	Max[q.size() - 1] = q[ma.front()];
	while (!mi.empty() && q.size()-1 - mi.front() >= k)
	{
		mi.pop_front();
	}
	while (!mi.empty() && q[mi.back()] > q.back())
	{
		mi.pop_back();
	}
	mi.push_back(q.size()-1);
	Min[q.size()-1] = q[mi.front()];
}