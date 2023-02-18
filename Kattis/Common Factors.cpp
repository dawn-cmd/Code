#include <bits/stdc++.h>
#define LL long long
#define min(a, b) ((a < b) ? (a) : (b))
using namespace std;

LL gcd(LL a, LL b)
{
    if (a < b)
        swap(a, b);
    return b == 0 ? a : gcd(b, min(a % b, a - b));
}

int main()
{
    LL n;
    cin >> n;
    vector<LL> pri;
    vector<bool> vis(n + 1);
    for (LL i = 2; i <= n; ++i)
    {
        if (!vis[i])
            pri.push_back(i);
        for (int j = 0; j < pri.size(); ++j)
        {   
            if (i * pri[j] > n)
                break;
            vis[i * pri[j]] = 1;
            if (i % pri[j] == 0)
                break;
        }
    }
    LL tmp = 1;
    LL cnt = 0;
    for (int i = 0; i < pri.size(); ++i)
    {
        tmp *= pri[i];
        cnt++;
        if (i < pri.size() - 1 && tmp * pri[i + 1] > n)
            break;
    }
    LL cnt1 = 0;
    for (int i = 0; i < pri.size(); ++i)
        if (pri[i] < tmp)
            cnt1++;
        else
            break;
    LL g = gcd(tmp, tmp - (cnt1 - cnt + 1));
    cout << (tmp - (cnt1 - cnt + 1)) / g << "/" << tmp / g << endl;
}
