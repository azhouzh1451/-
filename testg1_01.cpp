#include<bits/stdc++.h>
using namespace std;
//1145141919810

int tst[1001];
int tmp = 0;

void push(int dt){																
	tst[tmp] = dt;tmp++;
}

void pop(){
	tmp--;
}

int at(int i){
	return tst[i]; 
} 

//修改第i个元素的值 
void setdt(int i,int dt){
	tst[i] = dt;
}

void insert(int i,int dt){
	for(int ii = tmp-1;ii>=i;ii--){
		tst[ii+1] = tst[ii];
	}
	tst[i] = dt;
	tmp++;
}
void delate(int i){
	for(int ii = i+1;ii<tmp;ii++){
		tst[ii-1] = tst[ii];
	}
	
	tmp--;
}

int len(){
	return tmp;
}

bool empty(){
	return tmp==0;
	
}

void clear(){
	tmp = 0;
}

int main(){
	push(1);push(1);push(4);push(5);push(1);push(4);
	for(int i = 0;i<tmp;i++) cout<<at(i)<<' ';
	cout<<endl;pop();
	for(int i = 0;i<tmp;i++) cout<<at(i)<<' ';
	cout<<endl;
	setdt(2,1);
	for(int i = 0;i<tmp;i++) cout<<at(i)<<' ';
	insert(3,4);cout<<endl;for(int i = 0;i<tmp;i++) cout<<at(i)<<' ';
	delate(3);cout<<endl;for(int i = 0;i<tmp;i++) cout<<at(i)<<' ';
	cout<<endl<<len()<<' '<<empty() ? 1:0<<' ';
	return 0;
	//1 1 4 5 1 4
	//1 1 4 5 1
	//1 1 1 5 1
	//1 1 1 4 5 1
	//1 1 1 5 1
	//5 0
	
}
