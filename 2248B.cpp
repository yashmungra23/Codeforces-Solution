#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool possible = true;
        if (n < 2 * m)
        {
            possible = false;
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                if (a[i] > b[i] || b[i] > a[n - m + i])
                {
                    possible = false;
                    break;
                }
            }
        }
        if (possible)
            cout << "yEs\n";
        else
            cout << "nO\n";
    }
    return 0;
}