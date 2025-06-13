#include<iostream>
using namespace std;
int power(int n , int p){
	int prevPower=power(n,p-1);
	return n*prevPower;

    if(p==0){
	return 1;
    }  
}
int main(){
	int n;
	cout<<"Enter the number :";
	cin>>n;
	int p;
	cout<<"Enter the power : ";
	cin>>p;
	cout<<power(n,p)<<endl;
	return 0;
	
}
