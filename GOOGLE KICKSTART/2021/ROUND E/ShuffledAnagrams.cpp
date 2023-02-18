#include<bits/stdc++.h>
using namespace std;
void makeit(int id) {
    string s;
    cin >> s;
    // input s

    map <char, int> h;
    int maxnum = 0;
    for (int i = 0, l = s.length(); i < l; ++i) {
        if (h.find(s[i]) == h.end()) {
            h[s[i]] = 1;
        }
        else {
            h[s[i]]++;
        }
        maxnum = max(maxnum, h[s[i]]);
    }
    if (maxnum > s.length() / 2) {
        printf("Case #%d: %s\n", id, "IMPOSSIBLE");
        return;
    }
    // check if it can be shuffled or not

    string o = s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != o[i]) {
            continue;
        }
        for (int j = 0; j < s.length(); ++j) {
            if (i != j && o[i] != s[j] && o[j] != s[i]) {
                swap(s[i], s[j]);
                continue;
            }
        }
    }
    printf("Case #%d: %s\n", id, s.c_str());
}
int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        makeit(i);
    }
}