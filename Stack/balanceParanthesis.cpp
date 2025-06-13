#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char>st;
    int n=s.size();
    bool ans=true;

    for(int i=0;i<n;i++){

        if(s[i]=='{' or s[i]=='(' or s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='(' && !st.empty()){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }

        else if(s[i]=='}'){
            if(st.top()=='{' && !st.empty()){
                    st.pop();
            }
            else{
                ans=false;
                break;   
            }
        }

        else if(s[i]==']'){
            if(st.top()=='[' && !st.empty()){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }

    if(!st.empty()){
        return false;
    }
    return ans;

}

int main(){
    cout<<isValid("{([])}")<<endl;
    return 0;
}