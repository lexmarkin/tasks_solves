#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(pair<ll, string> a, pair<ll, string> b) {
    if (a.first != b.first) {
        return a.first > b.first;
    }
    return a.second < b.second;
}

int main() {
    map<string, map<string, ll>> data;
    map<string, ll> cost, guys;
    string s;
    ll n, val;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> s >> val;
        cost[s] = val;
    }
    string man;
    ll c;
    cin >> c;
    for (ll i = 0; i < c; i++) {
        cin >> s >> man;
        data[s][man]++;
        guys[man] = 0;
    }
    man = "";
    for (auto i: data) {
        ll mx = -1;
        for (auto m: i.second) {
            if (mx < m.second) {
                mx = m.second;
                man = m.first;
            }
        }
        guys[man] += cost[i.first];
    }
    vector<pair<ll, string>> ans;
    for (auto i: guys) {
        ans.emplace_back(i.second, i.first);
    }
    sort(ans.begin(), ans.end(), cmp);
    for (auto i: ans) {
        cout << i.second << ' ' << i.first << '\n';
    }
    return 0;
}
