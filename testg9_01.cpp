#include<bits/stdc++.h>
using namespace std;
#define N 1000
//by AZHOU 2023

struct Node{
	char val;
	int left,right;
};

Node node[N];  //����
int p; 
char pre_s[100],mid_s[100]; 
//ͨ������������� ������������й��������� ���ظ��ڵ��ַ
//pr pl �������Ҷ˵�  ml mr ��������Ҷ˵� 
int createTree(int pl,int pr,int ml,int mr){
	//�ݹ���� 	
	//���Ҷ˵���±����˵���±�� �ݹ���� 
	if(pl > pr || ml > mr){
		return 0;
	}
	//�½ڵ�ָ��  i�Ǹ��������ҵ������������и����±� 
	int np = ++p,i;
	//��ǰ���ָ���������������е���Ԫ�� 
	node[np].val = pre_s[pl]; 
	//ȷ������������i��λ�ã����� 
	for(i = ml;i <= mr;i++){
		//��������i �����������е���˵� 
		if(mid_s[i] == pre_s[pl])
			break;
	} 
	node[np].left = createTree(pl+1,pl+i-ml,ml,i-1);
	node[np].right =  createTree(pl+i-ml+1,pr,i+1,mr);
	return np;
}

//�������
void postOrder(int root){
	//�ݹ�
	if(0 == root) 
		return;
	postOrder(node[root].left);
	postOrder(node[root].right);
	cout<<node[root].val;
} 

int main(){
	cin>>pre_s>>mid_s;
	int len = strlen(pre_s);
	int root = createTree(0,len-1,0,len-1);
	postOrder(root);
	return 0;
}


