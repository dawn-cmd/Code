//
// Created by LightString on 1/16/2023.
//
#include "bits/stdc++.h"
using namespace std;
void doIt() {
    unordered_map<string, int> h;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i + 2 - 1 < n; ++i)
    {
        if (h.count(s.substr(i, 2)) && h[s.substr(i, 2)] + 2 - 1 < i)
        {
            cout << "YES" << endl;
            return;
        }
        h.emplace(s.substr(i, 2), i);
    }
    cout << "NO" << endl;
}
int main() {
    int T;
    cin >> T;
    while (T--)
        doIt();
}