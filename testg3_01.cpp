	#include<iostream>
#define N 100
using namespace std;
//by AZHOU 2022
//UID:1667217562

struct Node{
	double val;
	int next;
}; 

Node node[N];
int p;
int head;
int tail = head;

void push_f(double d){
	int np = ++p;
	node[np].val = d;
	node[np].next = node[head].next;
	node[head].next = np;
	if(tail == head)	
	    tail = np;
} 

void push_b(double d){
	int np = ++p;
	node[np].val = d;
	node[tail].next = np;
	tail = np;
}

int gA(int i){
	int ip = head;
	for(int j = 0;j<=i;j++){
		ip = node[ip].next; 
	} 
	return ip;
}

double gV(int i){
	return node[i].val;
}

void set(int i,double d){
	node[i].val = d; 
} 

void show(){
	for(int i = node[head].next;i!=0;i = node[i].next){
		cout<<node[i].val<<' '; 
	}
	cout<<endl;
}

void insert(int t,double d){
	int np = ++p;
	node[np].val = d;
	node[np].next = node[t].next;
	node[t].next = np;
	if(t == tail) tail = np;
}

void erase(int t){
	int nt = node[t].next;
	node[t].next = node[nt].next;
	if(nt==tail) tail = t;
}

int main(){
	for(int i = 1;i<=3;i++){
		push_f((double)i);
	}
	for(int i = 4;i<=6;i++){
		push_b((double)i);
	}
	show();
	cout<<gV(gA(2))<<endl;
	insert(gA(3),8);
	erase(gA(6));
	push_b(9);
	show();
	return 0;
}

