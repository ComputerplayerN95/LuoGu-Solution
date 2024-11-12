#include<iostream>

#include<queue>

#include<stack>

using namespace std;

stack<long long>s;


void print(long long sum);

int main()
{
	long long ini;
	char inc;
	cin >> ini;
	s.push(ini%=10000);
	while (cin >> inc)
	{
		if (inc == '*')
		{
			cin >> ini;
			ini *= s.top();
			s.pop();
			s.push(ini %= 10000);
		}
		else
		{
			cin >> ini;
			s.push(ini %= 10000);
		}
		if (cin.peek() == '\n')
		{
			break;
		}
	}
	long long sum = 0;
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	print(sum);
	return 0;
}
void print(long long sum)
{
	if (sum > 9999)
	{
		cout << sum % 10000;
	}
	else cout << sum;
}