#include<bits/stdc++.h>
#define N 10000
using namespace std;
//by AZHOU 2023
//UID:1667217562

template <class T>
class queue{
	T q[N];
	int head,tail;
	public:
		queue(){
			head = tail = 0;
		}
		void push(T d){
			q[++tail] =d;
		}
		void pop(){
			++head;
		}
		T back(){
			return q[tail];
		}
		bool empty 
};

int main(){

	return 0;
}

