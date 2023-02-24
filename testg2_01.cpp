#include<bits/stdc++.h>
using namespace std;
//by AZHOU 2022
//UID:1667217562

vector<int> vec;
vector<int>::iterator ite;

int main(){
	for(int i = 0;i<=8;i++) vec.push_back(i);
	for(ite = vec.begin();ite!=vec.end();ite++){
		cout<<*ite;
	}
	return 0;
}

