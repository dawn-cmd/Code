//
// Created by LightString on 1/24/2023.
//
#include "bits/stdc++.h"
using namespace std;
using LL = long long;
void doIt() {
    LL a1;  // Alice, Bob
    LL a2;  // Alice
    LL a3;  // Bob
    LL a4;  // No one like
    cin >> a1 >> a2 >> a3 >> a4;
    LL alice = 0;
    LL bob = 0;
    LL ans = 0;
    alice += a1;
    bob += a1;
    ans += a1;
    a1 = 0;
    if (bob == 0 && alice == 0)
    {
        cout << min((LL)1, a2 + a3 + a4) << '\n';
        return;
    }
    LL tmp = min(a2, a3);
    ans += tmp * 2;
    a2 -= tmp;
    a3 -= tmp;
    if (a2)
    {
        tmp = min(a2, bob + 1);
        bob -= tmp;
        alice += tmp;
        ans += tmp;
        if (bob == -1)
        {
            cout << ans << '\n';
            return;
        }
    }
    if (a3)
    {
        tmp = min(a3, alice + 1);
        bob += tmp;
        alice -= tmp;
        ans += tmp;
        if (alice == -1)
        {
            cout << ans << '\n';
            return;
        }
    }
    tmp = min(bob + 1, alice + 1);
    ans += min(tmp, a4);
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