#include <bits/stdc++.h>
using namespace std;
bool check(int k)  // check a number is pre-calculate number or not
{
    int cnt = 0;
    while (k)
    {
        if (k % 10 != 0)
            cnt += 1;
        if (cnt > 1)
            return false;
        k /= 10;
    }
    return cnt == 1;
}
int main()
{
    int T;
    vector<int> mem;  // remember the previous answers
    map<int, int> hash;  // pre-calculate the extremely round numbers
    for (int i = 1; i <= 999999; ++i)
        if (check(i))
            hash[i] = 1;
        else
            hash[i] = 0;
    mem.push_back(0);
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (mem.size() > n)
        {
            cout << mem[n] << endl;
            continue;
        }
        int ans = mem[mem.size() - 1];
        for (int i = mem.size(); i <= n; ++i)
        {
            if (hash[i])
                ans += 1;
            mem.push_back(ans);
        }
        cout << ans << endl;
    }
}