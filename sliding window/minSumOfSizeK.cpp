//minimum sum subarray size 
//sum>x

#include<iostream>
using namespace std;

int smallestSubarrayWithSum(int arr[], int n, int x){
    int sum=0, minlength=n+1, start=0, end=0;
    while(sum<=x && end<n){
        sum+=arr[end++];

    }
    while(sum>x && start<n){
        if(end - start< minlength){
            minlength=end - start;
        }
        sum=sum-arr[start++];
    }
    return minlength;
}
int main(){
    int arr[]={1,4,45,6,10,19}; 
    int x=80;
    int n=6;
    int minlength=smallestSubarrayWithSum(arr, n, x);
    if(minlength==n+1){
        cout<<"No such subarray exist "<<endl;
    }
    else{
        cout<<"smallest length subarray is "<<minlength <<endl;
    }

    return 0;
}
