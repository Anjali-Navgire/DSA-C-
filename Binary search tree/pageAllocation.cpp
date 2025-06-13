#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

bool isFeasible(int arr[], int n, int m, int mid){
    int studentSRequired=1, sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        } 
        if(sum+arr[i]>mid){
            studentSRequired++;
            sum=arr[i];
            if(studentSRequired>m){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
}
int allocateMinimumPages(int arr[], int n, int m){
    int sum=0;
    if(n<m){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
     int start=0,end=sum,ans=INT_MAX;
     while (start<=end){
        int mid=(start+end)/2;
        if(isFeasible(arr,n,m,mid)){
            ans=min(ans,mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;

}
int main(){
    int arr[]={12,34,67,90};
    int n=4;
    int m=2;
    cout<<"The minimum no of pages :"<<allocateMinimumPages(arr,n,m)<<endl;

    return 0;

}

