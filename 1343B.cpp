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
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n / 2; i++)
            {
                cout << i * 2 << endl;
            }
            for (int i = 1; i < n / 2; i++)
            {
                cout << (i * 2) - 1 << endl;
            }
            cout << n - 1 + (n / 2) << endl;
        }
    }
    return 0;
}