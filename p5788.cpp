#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#define l 3000005
#include<stack>

using namespace std;

stack<int>s;

int in[l];
int out[l];

int main()
{
    long long n;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &in[i]);
    }
    s.push(n);
    out[n] = 0;
    for (int i = n - 1; i > 0; i--)
    {
        while (!s.empty() && in[i] >= in[s.top()])
        {
            s.pop();
        }
        out[i] = s.empty() ? 0 : s.top();
        s.push(i);
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", out[i]);
    return 0;
}