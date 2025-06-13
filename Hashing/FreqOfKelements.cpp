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
#define pii pair<int ,int>
#define vii vector<pii>
#define rep(i,a,n) for(int i=a;i=n; i++)

signed main(){
    int n,k;
    cin>>n>>k;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int ,int >freq;
    for(int i=0;i<n;i++){
        int presentSize=freq.size();
        if(freq[a[i]]==0 && presentSize==k){
            break;
        }
        freq[a[i]]++;
    }
    vii ans;
    map<int ,int>::iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        if(it->ss!=0){
            pii p;
            p.ff=it->ss;
            p.ss=it->ff;
            ans.push_back(p);
        }
    }
    sort(ans.begin(),ans.end(),greater<pii> ());
    vii::iterator it1;
    for(it1=ans.begin();it1!=ans.end();it1++){
        cout<<it1->ss<<" "<<it1->ff<<endl;
    }
    return 0;
}
