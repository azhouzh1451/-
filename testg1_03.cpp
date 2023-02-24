#include<bits/stdc++.h>
using namespace std;
//1145141919810

vector<int> vec;

int main(){
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(1);
	vec.push_back(4);
	//vec.insert(3,999);
	vec.pop_back();
	for(int i = 0;i<vec.size();i++){
		cout<<vec[i]<<' ';
	}
	cout<<vec.size();
	vec.clear();
	cout<<' '<<vec.size();
	return 0;
}

