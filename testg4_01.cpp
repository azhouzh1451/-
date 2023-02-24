#include <iostream>
#define N 1000
using namespace std;

template <typename T>
struct Node{
	T val;
	int pre,next;
};

template<class T>
struct List{
	Node<T> node[N];
	int p;
	int head; 
	int tail;
	List(){
		p = 0;		
		head = ++p;	
		tail = head;
	}
	void push_front(T d){
		int np = ++p;
		node[np].val = d;
		node[np].next = node[head].next;
		node[np].pre = head;
		node[node[head].next].pre = np;
		node[head].next = np;
		if(tail == head)
			tail = np;
	}
	void push_back(T d){
		int np = ++p;
		node[np].val = d;
		node[tail].next = np;
		node[np].pre = tail;
		tail = np;
	}
	int getAddr(int i){
		int ip = head;
		for(int j = 1;j<=i;j++){
			ip = node[ip].next;
		}
		return ip;
	}
	int insert(int t,T d){
		int np = ++p;
		node[np].val = d;
		node[np].next = t;
		node[np].pre = node[t].pre;
		node[node[t].pre].next = np;
		node[t].pre = np;
		return np;
	}
	int erase(int t){
		node[node[t].pre].next = node[t].next;
		node[node[t].next].pre = node[t].pre;
		if(tail == t){
			tail = node[t].pre;
		}
		return node[t].next;
	}
	
	
	int begin(){
		return node[head].next;
	}
	int end(){
		return 0;
	}
	int pre(int t){
		return node[t].pre;
	}
	int next(int t){
		return node[t].next;	
	}
	
	T get(int t){
		return node[t].val;
	}
	
	void set(int t,T d){
		node[t].val = d;
	}
};

void show(List<int> li){
	for(int i = li.begin();i!=0;i = li.next(i)){
		cout<<li.get(i)<<' ';
	}
	cout<<endl;
}

int main(){
	List<int> li;
	for(int i = 1;i<=3;i++){
		li.push_front(i);
	}
	for(int i = 4;i<=6;i++){
		li.push_back(i);
	}
	show(li);
	cout<<li.get(li.getAddr(3))<<endl;
	li.insert(li.getAddr(4),8);
	li.erase(li.getAddr(7));
	li.push_back(9);
	show(li);
	return 0;
}
