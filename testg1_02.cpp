#include<bits/stdc++.h>
using namespace std;
//1145141919810

class VECTOR{							//˳����� 
	private:
		int tst[1001];				//˳��� 
		int tmp = 0;				//���ڿ��Ե��õ�˳����±� 
	public:
		void push(int dt){			//ĩβ���� 
			tst[tmp] = dt;tmp++; 
		}
		
		void pop(){					//ĩβɾ�� 
			tmp--;
		}
		
		int at(int i){				//���ص�ǰ˳����±�����Ӧ���� 
			return tst[i]; 
		} 
		
		
		void setdt(int i,int dt){ 	//�޸ĵ�i��Ԫ�ص�ֵ 
			tst[i] = dt;
		}
		
		
		void insert(int i,int dt){	//�������뵽�±�Ϊi�ĵ�ַ 
			for(int ii = tmp-1;ii>=i;ii--){
				tst[ii+1] = tst[ii];
			}
			tst[i] = dt;
			tmp++;
		}
		void delate(int i){			//ɾ���±�Ϊi�ĵ�ַ���Ե��� 
			for(int ii = i+1;ii<tmp;ii++){
				tst[ii-1] = tst[ii];
			}
		
				tmp--;
			}

		int len(){					//����˳���ĳ��� 
			return tmp;
		}

		bool empty(){				//�жϸ�˳����Ƿ�Ϊ�� 
			return tmp==0;
	
		}

		void clear(){				//���˳��� 
			tmp = 0;
		}

};


int main(){							//���Դ��� 
	VECTOR sl;							
	sl.push(1);sl.push(1);sl.push(4);sl.push(5);sl.push(1);sl.push(4);
	for(int i = 0;i<sl.len();i++) 
		cout<<sl.at(i)<<' ';
	cout<<endl;sl.pop();
	for(int i = 0;i<sl.len();i++)
		cout<<sl.at(i)<<' ';
	cout<<endl;
	sl.setdt(2,1);
	for(int i = 0;i<sl.len();i++) 
		cout<<sl.at(i)<<' ';
	sl.insert(3,4);
	cout<<endl;
	for(int i = 0;i<sl.len();i++)
		cout<<sl.at(i)<<' ';
	sl.delate(3);
	cout<<endl;
	for(int i = 0;i<sl.len();i++) 
		cout<<sl.at(i)<<' ';
	cout<<endl<<sl.len()<<' ';
	sl.clear();
	cout<<sl.empty() ? 1:0<<' ';
	return 0;
	//1 1 4 5 1 4
	//1 1 4 5 1
	//1 1 1 5 1
	//1 1 1 4 5 1
	//1 1 1 5 1
	//5 1
}

