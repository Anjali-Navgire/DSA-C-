#include<iostream>
#include<stack>
#include<queue>
#include<vector>

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second 
#define rep(i,a,b) for(int i=a;i<b;i++)
#define setBits(x) builtin_popcount(x)

using namespace std;
const int N=1e5+2, MOD=1e9+7;
int main(){
    int n,m;;
    cin>>n>>m;
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        add[x].push_back(y);
        add[y].push_back(x);
    }
    cout<<"adjacency list of the above graph is : "<<endl;
    rep(i,1,n+1){
        cout<<"i"<<"->";

    }
    vector<int>::iterator it;
    for(it=adj[i].begin();it!=adj[i].end();it++){
        cout<<*it<<" "<<endl;
    }
    return 0;
}
