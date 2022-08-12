#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<int> st;
    queue<int> op;
    int n;
    cin >> n;
    int num = 1;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (!st.empty() && val > st.top()) {
            cout << 0;
            return 0;
        }
        op.push(1);
        st.push(val);
        while (!st.empty() && st.top() == num) {
            op.push(2);
            st.pop();
            num++;
        }
    }
    int val = op.front();
    op.pop();
    int count = 1;
    while (!op.empty()) {
        if (op.front() == val) {
            count++;
        } else {
            cout << val << ' ' << count << '\n';
            val = op.front();
            count = 1;
        }
        op.pop();
    }
    cout << val << ' ' << count;
    return 0;
}