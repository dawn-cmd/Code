//
// Created by LightString on 1/5/2023.
//
#include "bits/stdc++.h"
using namespace std;

void doIt()
{
    int n;
    cin >> n;
    if (n == 3)
    {
        cout << "NO" << endl;
        return;
    }
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
        int cur = 1;
        while (n--)
        {
            cout << cur << " ";
            cur *= -1;
        }
        cout << endl;
        return;
    }
    cout << "YES" << endl;
    int k = (n - 1) / 2 - 1;
    while (n--)
    {
        cout << k << " ";
        k = -(k + 1);
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        doIt();
}