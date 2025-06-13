#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int get_max_area(vector<int> a) {
    int n = a.size(), ans = 0, i = 0;
    stack<int> st;
    a.push_back(0);  

    while (i < a.size()) { 
        while (!st.empty() && a[st.top()] > a[i]) {
            int t = st.top();
            st.pop();  
            int h = a[t];
            int len = st.empty() ? i : i - st.top() - 1;  
            ans = max(ans, h * len);
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main() {
    vector<int> a = {2, 1, 5, 6, 2, 3};
    cout << "Maximum Area: " << get_max_area(a) << endl;
    return 0;
}
