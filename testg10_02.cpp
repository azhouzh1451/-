#include <bits/stdc++.h>
#include <cctype>
#include <stack>
using namespace std;

stack<char> calc;

int getLevel(char c)
{
    switch (c)
    {
        case '(':
            return 5;
        case '^':
             return 4;
        case '*':
        case '/':
            return 3;
        case '+':
        case '-':
            return 2;
        case ')':
            return 1;
    }
}

int main()
{
    char c;
    int num;
    c = getchar();
    stringstream ss;
    while(c != '\n')
    {
        if(isdigit(c))
        {
            num = num * 10 + c - '0';
        }
        else
        {
            if(num)
            {
                ss << num;
                num = 0;
            }
            while(!(calc.empty() || getLevel(c) > getLevel(calc.top()) || calc.top() == '('))
            {   
            	ss<< calc.top();
            	calc.pop();
			}
			if(calc.empty()== false && calc.top() == '(' && c == ')')
			{
				calc.pop();
			}
			else
			{
				calc.push(c);
			}
        }
        c = getchar();
        
    }
    if(num != 0)
        {
        	ss<<num;
		}
		while(!calc.empty())
		{
			ss<<calc.top();
			calc.pop();
		}
		cout<<ss.str();
    return 0;
}