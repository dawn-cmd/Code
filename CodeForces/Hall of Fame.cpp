//
// Created by LightString on 1/4/2023.
//
#include "bits/stdc++.h"
using namespace std;

void doIt()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] == 'L' && s[i + 1] == 'R')
        {
            cout << i + 1 << endl;
            return;
        }
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            cout << 0 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        doIt();  // Do it! Just! Do it!!
}