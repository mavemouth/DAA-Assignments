#include <bits/stdc++.h>
using namespace std;

bool isPower(int n) {
    return (n & (n-1)) == 0;
}

int main() {
    string s = "fooland";
    int k = 2;

    int n = s.size();
    if(isPower(n)) k /= 2;
    else k *= 2;

    stack<char> st;
    for(char c : s) {
        while(!st.empty() && k && st.top() > c) {
            st.pop();
            k--;
        }
        st.push(c);
    }

    while(k--) st.pop();

    string res="";
    while(!st.empty()) {
        res = st.top() + res;
        st.pop();
    }

    cout << res;
    return 0;
}
