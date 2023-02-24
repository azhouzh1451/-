#include<bits/stdc++.h>
using namespace std;
//by AZHOU 2023
//UID:1667217562
/*
描述
把M个同样的苹果放在N个同样的盘子里，允许有的盘子空着不放，问共有多少种不同的分法？（用K表示）5，1，1和1，5，1 是同一种分法。
输入
第一行是测试数据的数目t（0 <= t <= 20）。以下每行均包含二个整数M和N，以空格分开。1<=M，N<=10。
输出
对输入的每组数据M和N，用一行输出相应的K。
样例输入
1
7 3
样例输出
8
*/

int A,m,n,k;    


int main(){
	cin>>A;
	while(A--){
		cin>>m>>n;
		if(n==1 || m==1){ //||是逻辑或 
			cout<<1<<endl;
			continue;
		}
		
	}
	return 0;
}

