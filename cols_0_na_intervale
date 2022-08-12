#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;

int n, k, a[N], b[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int len = (int)sqrt(n + 1.00);
    for(int i = 0; i < n; i++){
        b[i / len] += (a[i] == 0);
    }
    cin >> k;
    for(int i = 0; i < k; i++){
        int ans = 0, l, r;
        cin >> l >> r;
        l--;
        r--;
        for(int j = l; j <= r;){
            if(j % len == 0 and j + len - 1 <= r){
                ans += b[j / len];
                j += len;
            }
            else{
                ans += (a[j] == 0);
                j++;
            }
        }
        cout << ans << " ";
    }
}
