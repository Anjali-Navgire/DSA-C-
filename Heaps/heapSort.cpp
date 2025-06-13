#include<iostream>
#include<set>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<string>

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for (int i=a;i=b;i++)
#define ff first
#define ss second
#define setbits(x) builtin_popcount(x)

void heapify(vi &a, int n , int i){
    int maxIdx=i;
    int left =2*i+1;
    int right=2*i+2;
    if(left<n && a[left]>a[maxIdx]){
        maxIdx = left;

    }
    if(right<n && a[right]>a[maxIdex]){
        maxIdx=right;
        heapify(a,n,maxIdx);
    }
}
//heap sort fun
void heapsort(vi &a){
    int n=a.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
int main(){
    int n;
    cin>>n;
    rep(i,0,n){
        cin>>a[i];
    }
    heapsort(a);
    return 0;
}






















