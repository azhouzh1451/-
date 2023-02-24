#include<bits/stdc++.h>
using namespace std;
//1145141919810

class VECTOR{							//顺序表类 
	private:
		int tst[1001];				//顺序表 
		int tmp = 0;				//现在可以调用的顺序表下标 
	public:
		void push(int dt){			//末尾输入 
			tst[tmp] = dt;tmp++; 
		}
		
		void pop(){					//末尾删除 
			tmp--;
		}
		
		int at(int i){				//返回当前顺序表下标所对应的数 
			return tst[i]; 
		} 
		
		
		void setdt(int i,int dt){ 	//修改第i个元素的值 
			tst[i] = dt;
		}
		
		
		void insert(int i,int dt){	//将数插入到下标为i的地址 
			for(int ii = tmp-1;ii>=i;ii--){
				tst[ii+1] = tst[ii];
			}
			tst[i] = dt;
			tmp++;
		}
		void delate(int i){			//删除下表为i的地址所对的数 
			for(int ii = i+1;ii<tmp;ii++){
				tst[ii-1] = tst[ii];
			}
		
				tmp--;
			}

		int len(){					//返回顺序表的长度 
			return tmp;
		}

		bool empty(){				//判断该顺序表是否为空 
			return tmp==0;
	
		}

		void clear(){				//清空顺序表 
			tmp = 0;
		}

};


int main(){							//测试代码 
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

