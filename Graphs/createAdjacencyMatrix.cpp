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
//1e5+2 = 100002 This is typically used as an upper bound size for arrays or vectors in competitive programming.
const int N=1e5+2 ;
//1e9 + 7 = 1000000007 is a large prime number often used as a modulus in programming problems to prevent 
//integer overflow and ensure results stay within a manageable range.
const int MOD=1e9+7;

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<vi> adjm(n+1, vi(n+1,0));
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }
    cout<<"adjacency matrix of the above graph is given by :"<<endl;
    rep(i,1,n+1){
        rep(j,1,n+1){
            cout<<adjm[i][j]<<" "<<endl;
        }
    }
    if(adjm[3][7]){
        cout<<" There is edge between 3 and 7"<<endl;
    }
    else{
        cout<<" no edge between 3 and 7"<<endl;

    }
    
    return 0;
}

/* 
7 7
1 2
1 3
2 4
2 5
2 6
2 7
7 3 

*/