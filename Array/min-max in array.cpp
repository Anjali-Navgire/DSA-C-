#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxNo;
    int minNo;

    for (int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    return 0;
}