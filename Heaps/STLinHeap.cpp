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


int main(){
    priority_queue<int,vector<int>>pq;

    pq.push(2);
    pq.push(3);
    pq.push(1);
    cout<<"The top element at top is : "<<pq.top()<<endl;
    pq.pop();
    cout<<"The element at top after removing element is : "<<pq.top()<<endl;
    priority_queue<int,vector<int>,greater<int>>pqm;
    pqm.push(2);
    pqm.push(1);
    pqm.push(3);
    cout<<pqm.top()<<endl;
    return 0;
}