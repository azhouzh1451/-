#include<bits/stdc++.h>
using namespace std;
//by AZHOU 2023
//UID:1667217562
#define N 1000
/*
	Name: 
	Copyright: 
	Author: 
	Date: 29/01/23 17:26
	Description: 
*/


template <class T>
struct Node {
	T val;
	int l,r;
};

template <class T>
class twoTree {
	// Private section
	Node<T> node[N];
	int p;
	public:
		// Public Declarations
		void pro(int r){
			if(r=0)
		 		return ;
			cout<<node[r].val;
			pro(node[r].l);
			pro(node[r].r); 
		} 

		void io(int r){
			if(r=0)
		 		return ;
			io(node[r].l);
			cout<<node[r].val;
			io(node[r].r); 
		}
		
		void poo(int r){
			if(r=0)
		 		return ;
			poo(node[r].l);
			poo(node[r].r);
			cout<<node[r].val;
		}
		
		int ct(char val){
			if(val == '.')
			    return 0;
			else{
				int np = ++p;
				node[np].val = val;
				node[np].l = ct(cin.get());
				node[np].r = ct(cin.get());
				return np;
				
			}
		}
		
		void bfs(int r){
			queue<int> q;
			cout<<node[r].val;
			q.push(r);
			while(!q.empty()){
				int u = q.front();
				q.pop();
				if(node[u].l != 0){
					cout<<node[node[u].l].val;
					q.push(node[u].l);
				}
				if(node[u].r != 0){
					cout<<node[node[u].r].val;
					q.push(node[u].r);
				} 
			}
		}
		
		int lN(int r){
			if(0 == r)
		        return 0;
			else if(node[r].l==0 && node[r].r == 0)
		        return 1;
		    else
		    	return lN(node[r].l) + lN(node[r].r);
		}
		
		int getData(int r){
			if(0 == r)
                return 0;
			else
				return max(gD(node[r].l), gD(node[r].r)) + 1; 
		} 
};

twoTree<char> t;

int main(){
	return 0;
}

