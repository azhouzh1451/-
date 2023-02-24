#include<iostream>
using namespace std;
//by AZHOU 2023
//UID:1667217562
//0-670-82162-4

int main(){
	string s;
	char r,cr;
	int p = 1,sum=0;
	cin>>s;
	r = s.back();
	s.pop_back();
	for(int i = 0;i<s.length();i++){
		if(s[i]!='-'){
			sum += p++*(s[i]-'0');
		} 
	} 
	cr = sum%11==10 ? 'X' : '0'+sum%11;
	if(r == cr){
		cout<<"Right";
	}else{
		s.push_back(cr);
		cout<<s;
	}
	return 0;
}

