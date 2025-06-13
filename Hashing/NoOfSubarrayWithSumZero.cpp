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
#define ff first
#define ss second
#define rep(i,a,n) for(int i=a;i=n; i++)

int main(){
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n)
        cin>>a[i];
    map<int,int>count;
    int prefsum=0;
    rep(i,0,n){
        prefsum+=a[i];
        count[prefsum]++;
    }

    int ans=0;
    map<int,int>::iterator it;
    for(it=count.begin();it!=count.end();it++){
        int c=it->ss;
        ans+=(c*(c-1))/2;
        if(it->ff==0){
            ans+=it->ss;
        }

    }
    cout<<ans<<endl;
    return 0;
}