#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
    }
    bool found = false;
    //sort(a.begin(),a.end());
    for( int i=0;i<n;i++){
        int low = i+1 , high = n-1;
        while(low<high){
            int curr=a[i]+a[low]+a[high];
            if(curr==target){
                found=true;

            }
            if(curr<target){
                low++;
            }
            else{
                high--;
            }
        }
    }
    if(found){
        cout<<"True"<<endl;

    }
    else{
        cout<<"False"<<endl;
    }

}