#include <bits/stdc++.h>
using namespace std;

int main() {
    stack <string> s;
    s.push("");
    int q;
    cin >> q;

    while(q--) {
        int inp, k;
        string st;
        cin >> inp;

        if(inp == 1) {
            cin >> st;
            st = s.top() + st;
            s.push(st);
        } else if(inp == 2) {
            cin >> k;
            st = s.top();
            st = st.substr(0, st.length()-k);
            s.push(st);
        } else if(inp == 3) {
            cin >> k;
            st = s.top();
            cout << st[k-1] <<endl;
        } else {
            s.pop();
        }
    }

    return 0;
}

