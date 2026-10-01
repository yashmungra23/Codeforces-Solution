#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >> s;
    int n;
    cin >> n;

    bool flag = true;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i].first >= s)
        {
            flag = false;
        }
        else if (v[i].first < s)
        {
            s += v[i].second;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}