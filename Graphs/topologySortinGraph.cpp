#include<iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    vector<vector<int>>adj(n);
    vector<int>indeg(n,0);

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        indeg[v]++;
    }
    queue<int>pq;
    for(int i=0;i<n;i++){
        if(indeg[i]==0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        count++;
        int x=pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it:adj[x]){
            indeg[it]--;
            if(indeg[it]==0){
                pq.push(it);
            }
        }
    }
}