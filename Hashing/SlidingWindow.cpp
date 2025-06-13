#include<iostream>
#include<set>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

#define vi vector<int>
#define rep(i,a,n) for(int i=a;i=n; i++)

int main(){
    int n,k;
    cin>>n>>k;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int sum=0,ans=INT8_MAX;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    cout<<sum<<" "<<endl;
    ans=min(ans,sum);
    rep(i,1,n-k+1){
        sum-=a[i-1];
        sum+=a[i+k-1];
        ans=min(ans,sum);
        cout<<sum<<" "<<endl;
    }
    cout<<ans<<endl;
    return 0;
}