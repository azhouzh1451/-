#include<bits/stdc++.h>
using namespace std;
//by AZHOU 2022
//UID:1667217562

struct Book{
	int nb;
	string zz;
};
vector<Book> vec;
vector<int> v2;
int n,len,cnt[26];
Book in;

int main(){
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>in.nb>>in.zz;
		vec.push_back(in);
	}
	vector<Book>::iterator ite;
	for(ite = vec.begin();ite!=vec.end();ite++){
		len = (*ite).zz.length();
		for(int j = 0;j<len;j++){
			cnt[(*ite).zz[j]-'A']++;
		}
	}
	char m = 'A';
	int zzb = 0;
	for(int i = 0;i<26;i++){
		if(cnt[m-'A']<cnt[i]){
			m = i+'A';
			zzb = cnt[i];
		}
	}
	for(int i = 0;i<n;i++){
		len = vec.at(i).zz.length();
		for(int j = 0;j<len;j++){
			if(vec.at(i).zz[j]==m){
				v2.push_back(vec.at(i).nb);
			}
		}
	}
	cout<<m<<endl<<zzb<<endl;
	for(int i = 0;i<zzb;i++){
		cout<<v2.at(i)<<endl;
	}
	
	return 0;
}

