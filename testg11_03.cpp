#include <bits/stdc++.h>
using namespace std;

int solve(int m, int n)
{   
    if (m < n)
    {
        return 0;
    }
    else if(m ==  n || 1 == n)
    {
        return 1;
    }
    else
    {
        return solve(m - 1, n - 1) + n * solve(m - 1, n);
    }
}

int main()
{
    int m, n;
    cin>> m >> n;
    cout<< solve(m, n);
    return 0;
}

