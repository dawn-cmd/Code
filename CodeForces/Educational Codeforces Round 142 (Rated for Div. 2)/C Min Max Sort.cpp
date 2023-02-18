//
// Created by LightString on 1/24/2023.
//
#include "bits/stdc++.h"
using namespace std;
void doIt() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num: nums)
        cin >> num;
    unordered_map<int, int> h;
    int ans = 0x3f3f3f3f;
    for (const auto &num: nums)
    {
        h[num] = (h.find(num - 1) == h.end()) ? 1 : (h[num - 1] + 1);
        ans = min(ans, max(num - h[num], n - num));
    }
    cout << ans << '\n';
}
int main() {
    int T;
    cin >> T;
    while (T--)
        doIt();
}