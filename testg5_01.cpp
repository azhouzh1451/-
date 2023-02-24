#include<bits/stdc++.h>
#include "test44_01.cpp"
using namespace std;
//by AZHOU 2023
//UID:1667217562
vstk<int> vsk;
lstk<int> lsk;
int main(){
	char c;
	cin>>c;
	if('v' == c){
		int n,m;
 		cin>>n;
 		for(int i = 0;i<n;i++){
	 		cin>>m;
	 		vsk.push(m);}
		while(!vsk.empty()){
			cout<<vsk.getTop()<<' '; 
			vsk.pop();}
	}else{
		int n,m;
		cin>>n;
		for(int i = 0;i<n;i++){
			cin>>m;
			lsk.push(m);
		}
		while(!lsk.empty()) {
			cout<<lsk.top()<<' ';
			lsk.pop();
		}
	}
	return 0;
}

