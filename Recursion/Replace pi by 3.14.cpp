#include<iostream>
using namespace std;
//Replace pi by 3.14

void replacePi(string s){
	if(s.length()==0){
		return ;
	}
	if(s[0]=='p' && s[1]=='i'){
		cout<<"3.14";
		replacePi(s.substr(2));
	}
}
int main(){
	replacePi("agshyrhjdpidhgtspi");
	return 0;
}
