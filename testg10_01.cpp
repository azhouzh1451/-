#include<bits/stdc++.h>
using namespace std;
//by AZHOU 2023
//UID:1667217562
#define N 55

struct Node
{
	int n;
	char c;
};

Node eq[N];
int p,ei;

int calc(int a, int b, char c)
{
	switch(c)
	{
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			return a/b;
	}
}

int solve()
{
	int i = p--;
	if(eq[i].c == '\0')
	{
		return eq[i].n;
	}
	else
	{
		int b = solve();
		int a = solve();
		return calc(a, b, eq[i].c);
	}
}

int main()
{
 	int num = 0;
 	string s;
 	cin>>s;
 	for(int i = 0;s[i] != '@';++i)
 	{
 		if(s[i] >= '0' && s[i]<='9')
 		{
 			num = num*10+s[i] - '0';
		}
		else if(s[i] == '.')
		{
			eq[++ei].n = num;
			num = 0;
		}
		else
		{
			eq[++ei].c = s[i];
		}
		p = ei;
	}
	cout<<solve();
	return 0;
}

