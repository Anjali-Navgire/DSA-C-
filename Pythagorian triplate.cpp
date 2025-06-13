#include<iostream>
using namespace std;
int check(int x,int y,int z){
	int a=max(x,max(y,z));
	int b,c;
	if(a==x){
		b=y;
		c=z;
	}
	else if(b=x){
		a=y;
		c=z;
	}
	else{
		a=x;
		c=y;
	}
	if(a*a =b*b+c*c){
		return true;
	}
	else{
		return false;
	}
	
}
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if(check(x,y,z)){
		cout<<"Pythagorian triplate"<<endl;
	}
	else{
		cout<<"Not a pythagorian triplate"<<endl;
	}
	return 0;
}
