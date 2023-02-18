//
// Created by LightString on 1/13/2023.
//
#include "bits/stdc++.h"
using namespace std;

bool checkStr(const string &a, const string &b, const string &c)
{
    return (a <= b && c <= b) || (a >= b && c >= b);
}

void doIt()
{
    string s;
    cin >> s;
    string a;
    string b;
    string c;
    for (int i = 0, _ = s.size(); i < _ - 2; ++i)
        for (int j = i + 1; j < _ - 1; ++j)
        {
            a = s.substr(0, i + 1);
            b = s.substr(i + 1, j - (i + 1) + 1);
            c = s.substr(j + 1);
            if (checkStr(a, b, c))
            {
                cout << a << " " << b << " " << c << endl;
                return;
            }
        }
    cout << ":(" << endl;
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