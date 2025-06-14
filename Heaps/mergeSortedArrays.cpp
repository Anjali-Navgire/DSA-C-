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
#define pii pair<int,int>
#define rep(i,a,b) for (int i=a;i=b;i++)
#define ff first
#define ss second

int main(){
    int k;
    cin>>k;
    vector<vector<int>>a(k);
    rep(i,0,k){
        int size;
        cin>>size;
        a[i]=vector<int>(size);
        a[i]=vector<int>(size);
        rep(j,0,size){
            cin>>a[i][j];
        }
    }
    vector<int>idx(k,0);
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    rep(i,0,k){
        pii p;
        p.ff=a[i][0];
        p.ss=i;
        pq.push(p);
    }
    vi ans;
    while(!pq.empty()){
        pii x=pq.top();
        pq.pop();
        ans.push_back(x.ff);
        if(idx[x.ss]+1<a[x.ss].size()){
            pii p;
            p.ff=a[x.ss][idx[x.ss]+1];
            p.ss=x.ss;
            pq.push(p);

        }
        idx[x.ss]+=1;
    }
    rep(i,0,ans.size()){
        cout<<"The final array after merging K arrays is :  "<<ans[i]<<endl;
    }
    return 0;
}








