//stack basic operations
#include<iostream>
#include<stack>
using namespace std;
class stack{
	public:
		stack(){
		    int	arr=new int[n];
			top=-1;
		}
		void push(int x){
			if(top==n-1){
				cout<<"stack overflow";
				return;
			}
			top++;
			arr[top]=x;
		}
		void pop(){
			if(top==-1){
				cout<<"Noelement in stackto pop"<<endl;
				
			}
			top--;
		}
		int Top(){
			if(top==-1){
				cout<<"No element in stack"<<endl;
				return -1;
			}
			return arr[top];
		}
		bool empty(){
			return top==-1;
		}
};
int main(){
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	cout<<st.Top()<<endl;
	st.pop();
	st.pop();
	st.pop();
	cout<<st.Top()<<endl;
	return 0;
}





















