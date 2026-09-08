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
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int odd = 0, cnt0 = 0, cnt2 = 0;
        for (int x : arr)
        {
            if (x % 2 == 1)
                odd++;
            else if (x % 4 == 0)
                cnt0++;
            else
                cnt2++;
        }

        cout << max({odd, cnt0, cnt2}) << endl;
    }
    return 0;
}