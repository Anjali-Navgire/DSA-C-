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

#define ff first
#define ss second
#define rep(i,a,n) for(int i=a;i=n; i++)
#define vi vector<int>

int main(){
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[a[i]]++;

    }
    map<int,int >::iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        cout<<it->ff<<" "<<it->ss<<endl;
    }
    return 0;
}