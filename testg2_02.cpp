#include<bits/stdc++.h>
using namespace std;
//by AZHOU 2022
//UID:1667217562

vector<int> vec;
vector<int>::iterator ite;
int n,in,sum;

int main(){
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>in;
		vec.push_back(in);
	}
	for(ite = vec.begin();ite!=vec.end();ite++){
		sum +=(*ite);
	}
	cout<<sum;
	return 0;
}

