//
// Created by LightString on 1/6/2023.
//
#include "bits/stdc++.h"
#define abs(x) ((x)*(x))
using namespace std;

void doIt()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cur = s[0] - '0';
    s = s.substr(1);
    int tmp;
    for (const auto &c: s)
    {
        tmp = c - '0';
        if (abs(cur + tmp) < abs(cur - tmp))
        {
            printf("+");
            cur += tmp;
            continue;
        }
        printf("-");
        cur -= tmp;
    }
    printf("\n");
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