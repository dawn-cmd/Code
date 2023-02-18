//
// Created by LightString on 1/5/2023.
//
#include "bits/stdc++.h"
using namespace std;
using LL = long long;  // 十年OI一场空，不开LL见祖宗

int dealWithLeft(const vector<LL> &a, LL &pm, const int &m)
{
    priority_queue<LL> pq;
    pq.emplace(a[m]);
    int ans = 0;
    for (LL i = m - 1, pi = pm; i >= 0; --i)
    {
        pi -= a[i + 1];
        if (pi >= pm)
        {
            pq.emplace(a[i]);
            continue;
        }
        while (pi < pm)
        {
            pm -= pq.top() * 2;
            pq.pop();
            ans += 1;
        }
        pq.emplace(a[i]);
    }
    return ans;
}

int dealWithRight(const vector<LL> &a, LL &pm, const int &n, const int &m)
{
    priority_queue<LL, vector<LL>, greater<>> pq;
    int ans = 0;
    for (LL i = m + 1, pi = pm; i < n; ++i)
    {
        pi += a[i];
        pq.emplace(a[i]);
        if (pi >= pm)
            continue;
        while(pi < pm)
        {
            pi -= pq.top() * 2;
            pq.pop();
            ans += 1;
        }
    }
    return ans;
}

void doIt()
{
    int n;  // total numbers
    int m;  // target id
    cin >> n >> m;
    m -= 1;
    vector<LL> a(n);  // the numbers provided
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    LL pm = 0;  // prefix sum of m
    for (int i = 0; i <= m; ++i)
        pm += a[i];
    int ans = 0;
    ans += dealWithLeft(a, pm, m);
    ans += dealWithRight(a, pm, n, m);
    cout << ans << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        doIt();
}