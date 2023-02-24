#include<bits/stdc++.h>
#include<list>
using namespace std;
//by AZHOU 2022
//UID:1667217562



int main(){
	list<int> lst;
	lst.push_back(1);
	lst.push_back(1);
	lst.push_back(4);
	lst.push_back(5);
	lst.push_back(1);
	lst.push_back(4);
	list<int>::iterator ite;
	for(ite = lst.begin();ite!=lst.end();ite++){
		cout<<*ite<<' ';
	}
	return 0;
}

