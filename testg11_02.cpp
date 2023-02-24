#include <bits/stdc++.h>
#define N 10005
using namespace std;

struct QNode // QNode是用来处理结点的，后面用于队列
{
    string s;
    int p;
    QNode(){}
    QNode(string a, int b):s(a), p(b){}
};

struct Node // 日常结点结构体
{
    char val;
    int l, r;
};
 
Node node[N];
int p, lev_i;
string s_mid, s_lev;

void createTree()
{
    queue<QNode> que;
    que.push(QNode(s_mid, ++p));
    while(que.empty() == false)
    {
        QNode u = que.front();
        que.pop();
        int i;
        for(i = 0; i< u.s.length(); ++i)
        {
            if(u.s[i] == s_lev[lev_i])
            {
                break;
            }
        }
        node[u.p].val = s_lev[lev_i++];
        string sl = u.s.substr(0, i), sr = u.s.substr(i+1);
        if(sl.length() > 0)
        {
            int lp = ++p;
            node[u.p].l = lp;
            que.push(QNode(sl, lp));
        }
        if(sr.length() > 0)
        {
            int rp = ++p;
            node[u.p].r = rp;
            que.push(QNode(sr,rp));
        }
    }
}

void preOrder(int root)
{
    if(root != 0)
    {
        cout<<node[root].val;
        preOrder(node[root].l);
        preOrder(node[root].r);
    }
}

int main()
{
    cin>>s_mid >> s_lev;
    createTree();
    preOrder(1);
    return 0;
}


