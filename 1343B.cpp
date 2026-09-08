#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if ((n / 2) % 2 == 1)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
            for (int i = 1; i <= n / 2; i++)
            {
                cout << i * 2 << "\n";
            }
            for (int i = 1; i < n / 2; i++)
            {
                cout << i*2 - 1 << "\n";
            }
            cout << n - 1 + n/2 << "\n";
        }
    }
    return 0;
}