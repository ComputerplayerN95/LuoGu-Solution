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

void O(int op);

int main()
{
	int n;
	cin >> n;
	int op, x;
	for (int i = 0; i < n; i++)
	{
		cin >> op;
		O(op);
	}
	return 0;
}

void O(int op)
{
	int x;
	if (op == 1)
	{
		cin >> x;
		q.push(x);
	}
	if (op == 2)
	{
		cout << q.top()<<endl;
	}
	if (op == 3)
	{
		q.pop();
	}
}