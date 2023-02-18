//
// Created by LightString on 1/8/2023.
//
#include "bits/stdc++.h"
using namespace std;

void doIt()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    sort(nums.begin(), nums.end(), greater<int>());
    int sum = nums[0];
    for (int i = 1; i < n; ++i)
    {
        if (sum != nums[i])
        {
            sum += nums[i];
            continue;
        }
        for (int j = i + 1; j < n; ++j)
            if (sum != nums[j])
            {
                swap(nums[i], nums[j]);
                break;
            }
        if (sum == nums[i])
        {
            cout << "NO" << endl;
            return;
        }
        sum += nums[i];
    }
    cout << "YES" << endl;
    for (const auto& num: nums)
        cout << num << " ";
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        doIt();
}