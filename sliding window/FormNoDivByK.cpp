//form k size subarray & check if sum is divided by given number or not 

#include<iostream>
#include<vector>
using namespace std;

void formNumberFormSubarray(vector<int>arr, int k){
    pair<int ,int>ans;
    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+arr[i];
    }
    bool found=false;
    if(sum % 3 == 0){
        ans=make_pair(0, k-1);
        found = true ;
    }
    for(int j=k; j<arr.size();j++){
        if(found){
            break;
        }
        sum=sum+arr[j]-arr[j-k];
        if(sum % 3  == 0){
            ans = make_pair(j-k+1,j);
            found = true;
        }
    }
    if(!found ){
        ans=make_pair(-1,0);
    }
    if(ans.first==-1){
        cout<<"No such subarray is exist"<<endl;
   }
    else{
        for(int i=ans.first;i<=ans.second;i++){
            cout<<arr[i]<<" "<<endl;
        }
        cout<<endl;
    }
}
int main(){
    vector<int>arr={84,23,45,12,56,82};
    int k=3;
    formNumberFormSubarray(arr, k);

    return 0;

}