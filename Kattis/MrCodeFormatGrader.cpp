#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n >> m;
    vector<int> state(n + 1);
    for (int i = 0, tmp; i < m; ++i)
    {
        cin >> tmp;
        state[tmp] = 1;
    }
    state.push_back(-1);
    int st = 1;
    vector<string> correct;
    vector<string> fault;
    for (int i = 2; i <= n + 1; ++i)
    {
        if (state[i] == state[i - 1])
            continue;
        if (st == i - 1)
            if (state[st] == 0)
                correct.push_back(to_string(st));
            else
                fault.push_back(to_string(st));
        else
            if (state[st] == 0)
                correct.push_back(to_string(st) + '-' + to_string(i - 1));
            else
                fault.push_back(to_string(st) + '-' + to_string(i - 1));
        st = i;
    }
    cout << "Errors: ";
    for (int i = 0; i < fault.size(); ++i)
        cout << fault[i] << (i == fault.size() - 2 ? " and ": (i == fault.size() - 1 ? "" : ", "));
    cout << endl;
    cout << "Correct: ";
    for (int i = 0; i < correct.size(); ++i)
        cout << correct[i] << (i == correct.size() - 2 ? " and ": (i == correct.size() - 1 ? "" : ", "));
    cout << endl;
}
