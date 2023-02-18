//
// Created by LightString on 1/15/2023.
//
#include "bits/stdc++.h"
using namespace std;
void doIt() {
    int w;
    int d;
    int h;
    cin >> w >> d >> h;
    int a;
    int b;
    int f;
    int g;
    cin >> a >> b >> f >> g;
    int ans = h + min(
        min(b + g, d - b + d - g) + abs(a - f),
        min(a + f, w - a + w - f) + abs(b - g));
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        doIt();
}