//
// Created by LightString on 1/8/2023.
//
#include "bits/stdc++.h"
using namespace std;

void doIt()
{
    int n;
    cin >> n;
    vector<int> nums(n * n);
    for (int i = 0; i < n * n; ++i)
        nums[i] = (i & 1) ? (i + 1) / 2: n * n - (i >> 1);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            printf("%d ", nums[(i & 1) ? n * (i + 1) - 1 - j : i * n + j]);
        printf("\n");
    }
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