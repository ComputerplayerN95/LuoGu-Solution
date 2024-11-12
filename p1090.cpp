#include<iostream>

#include<queue>

using namespace std;

struct Compare
{
	bool operator()(int a, int b)
	{
		return a > b;
	}
};

priority_queue<int,vector<int>,Compare>q;

int main()
{
	int n;
	cin >> n;
	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		q.push(num);
	}
	int l = 0;
	int x, y;
	while (q.size() != 1)
	{
		x = q.top();
		q.pop();
		y = q.top();
		q.pop();
		q.push(x + y);
		l += x + y;
	}
	cout << l;
	return 0;
}