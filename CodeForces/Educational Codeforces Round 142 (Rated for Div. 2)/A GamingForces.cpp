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
    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] == 0)
            continue;
        if (nums[i] == 1)
        {
            nums[i] -= 1;
            if (i < n - 1)
                nums[i + 1] -= 1;
            ++ans;
            continue;
        }
        ans += 1;
    }
    cout << ans << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        doIt();
}