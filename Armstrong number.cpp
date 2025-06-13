#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	while(n> 0){
		int lastdigit=n%10;
		sum+=(lastdigit,3);
		n=n/10;
	}
	if(sum== n){
		cout<<"Number is Armstrong number"<<endl;
	}
	else{
		cout<<"Number is not Armstrong number"<<endl;
	}
	return 0;
}
