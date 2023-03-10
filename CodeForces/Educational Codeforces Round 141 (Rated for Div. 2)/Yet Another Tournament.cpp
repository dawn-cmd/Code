//
// Created by LightString on 1/10/2023.
//
#include "bits/stdc++.h"
using namespace std;

void doIt()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    auto b = a;
    sort(b.begin(), b.end());
    int ans = 0;
    for (int i = 0; i < n && b[i] <= m; ++i) {
        m -= b[i];
        ++ans;
    }
    if (ans != 0 && ans != n && m + b[ans - 1] >= a[ans])
        ++ans;
    cout << n + 1 - ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        doIt();
}