#include<iostream>
#include<stack>
using namespace std;

stack<int>s;
int in[1000005];
int out[1000005];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int len;
		cin >> len;
		for (int i = 0; i < len; i++)
		{
			cin >> in[i];
		}
		for (int i = 0; i < len; i++)
		{
			cin >> out[i];
		}
		int flag = 0;
		for (int i = 0; i < len; i++)
		{
			s.push(in[i]);
			while (!s.empty() && s.top() == out[flag])
			{
				s.pop();
				flag++;
			}
			
		}
		if (s.empty())cout << "Yes"<<'\n';
		else cout << "No"<<'\n';
		while (!s.empty())
		{
			s.pop();
		}
		
	}
	return 0;
}
