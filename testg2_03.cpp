#include<bits/stdc++.h>
using namespace std;
//by AZHOU 2022
//UID:1667217562

vector<int> vec;

int main(){
	int n,in;
	vector<int>::reverse_iterator rite;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>in;
		vec.push_back(in);
	}
	for(rite = vec.rbegin();rite!=vec.rend();rite++){
		cout<<(*rite)<<' ';
	}
	return 0;
}

