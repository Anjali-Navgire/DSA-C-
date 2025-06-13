//print first 10 catalan numbers 

#include<iostream>
using namespace std;

int catalan(int n){
    if(n<=1){
        return 1;
    }
    int result=0;
    for(int i=0;i<=n-1;i++){
        result+=catalan(i)* catalan(n-i-1);
    }
    return result;
}
int main(){
    for(int i=0;i<10;i++){
        cout<<" the series of catalan numbers is : ";
        cout<<catalan(i)<<" ";
        
    }
    return 0;
}