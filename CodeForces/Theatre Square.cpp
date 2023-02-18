//
// Created by LightString on 1/13/2023.
//
#include "bits/stdc++.h"
using namespace std;
using LL = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    LL n;
    LL m;
    LL a;
    cin >> n >> m >> a;
    cout << (n / a + (n % a != 0)) * (m / a + (m % a != 0)) << endl;
}
