#include<iostream>

#include<deque>


using namespace std;

deque<int>q;

deque<int>m = {0};

int main()
{
	int n;
	cin >> n;
	int o;
	for (int i = 0; i < n; i++)
	{
		cin >> o;
		if (o == 0)
		{
			int x;
			cin >> x;
			q.push_back(x);
			if (x > m.back())m.push_back(x);
			else m.push_back(m.back());
		}
		if (o == 1)
		{
			
			while (m.back() == q.back())
			{
				m.pop_back();
			}
			q.pop_back();
		}
		if (o == 2)
		{
			cout << m.back() << '\n';
		}
	}
	return 0;
}