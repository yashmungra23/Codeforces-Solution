#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;

        long long d = y - x;
        long long ans = 0;

        while (k)
        {
            if (x > d)
            {
                ans += d * k;
                break;
            }

            long long q = d / x;
            long long last = min(d / q, x + k - 1);
            long long n = last - x + 1;

            ans += n * d - q * (x + last) * n / 2;

            x = last + 1;
            k -= n;
        }

        cout << ans << '\n';
    }
}