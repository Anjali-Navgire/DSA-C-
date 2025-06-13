#include<iostream>
#include<deque>
#include<stack>
using namespace std;

int main(){

    string s;
    cin>>s;

    stack<char>st;
    bool ans = false;

    for(int i=0;i<st.size();i++){
        if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }

        else if(s[i]==')'){
            while(st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/'){
                st.pop();
                if(st.top()=='('){
                    ans=true;

                }

            st.pop();

           }

        }
    return ans;
    cout<<ans;
    }
}