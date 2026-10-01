#include <bits/stdc++.h>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> v(n);
        for (auto &a : v)
        {
            cin >> a;
        }
        int i = 1;
        while(i < n)
        {
            if (v[i] < v[i - 1])
            {
                v[i - 1] = v[i - 1] + v[i];
                swap(v[i], v[i - 1]);
            }
            i++;
        }
        long long maxi = *max_element(v.begin() , v.end());
        cout << maxi << endl;
    }
    return 0;
}