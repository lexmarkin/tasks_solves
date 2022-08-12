#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n + 1, k);
    int len = sqrt(n + 1.0) + 1;
    vector<int> b(len, 1);
    for (int qw = 0; qw < m; qw++) {
        int l, r;
        cin >> l >> r;
        bool sell = 1;
        for (int i = l; i < r;) {
            if (i % len == 0 && i + len < r) {
                if (!b[i / len]) {
                    sell = 0;
                    break;
                }
                i += len;
            } else {
                if (!a[i]) {
                    sell = 0;
                    break;
                }
                i++;
            }
        }
        if (sell) {
            cout << 1 << endl;
            for (int i = l; i < r; i++) {
                a[i]--;
                if (!a[i]) {
                    b[i / len] = 0;
                }
            }
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
