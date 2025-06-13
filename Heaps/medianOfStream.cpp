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

priority_queue<int,vi,greater<int>>pqmin;
priority_queue<int,vi>pqmax;
void insert(int x){
    if(pqmin.size()==pqmax.size()){
        if(pqmax.size()==0){
            pqmax.push(x);
            return;
        }
        if(x<pqmax.top()){
            pqmax.push(x);

        }
        else{
            pqmin.push(x);
        }
    }
    else{
        {
            if(pqmax.size()>pqmin.size()){
                if(x>=pqmax.top()){
                    pqmin.push(x);
                }
                else{
                    int temp=pqmax.top();
                    pqmax.pop();
                    pqmin.push(temp);
                    pqmax.push(x);
                }
            }
            else{
                if(x<=pqmin.top()){
                    pqmax.push(x);
                }
                else{
                    int temp=pqmin.top();
                    pqmin.pop();
                    pqmax.push(temp);
                    pqmin.push(x);
                }
            }
        }
    }
}
double findMedian(){
    if(pqmin.size()==pqmax.size()){
        return(pqmin.top()+pqmax.top())/2.0;
    }
    else if(pqmax.size()>pqmin.size()){
        return pqmax.top();
    }
    else{
        return pqmin.top();
    }
}
int main(){
    insert(10);
    cout<<"The median of 10 is : "<<findMedian()<<endl;
    insert(15);
    cout<<"The median of 10 and 15 is : "<<findMedian()<<endl;
    insert(30);
    cout<<"The median of 10,15 and 30 is : "<<findMedian()<<endl;
    return 0;
}













