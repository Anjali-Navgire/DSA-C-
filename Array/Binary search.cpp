#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Total numbers are :";
    cin>>n;
    cout<<"Array elements are :";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Key is :";
    cin>>key;
    
    cout<<binarysearch(arr ,n, key)<<endl;
    return 0;
}
