#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.size() % 2 != 0)
    {
        printf("fix\n");
        return 0;
    }
    for (int i = 0; i < s.size() / 2; ++i)
    {
        if ((s[i] == s[s.size() - i - 1]) || (s[i] == '(' && s[s.size() - i - 1] == ')'))
            continue;
        printf("fix\n");
        return 0;
    }
    printf("correct\n");
}
