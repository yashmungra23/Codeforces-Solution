#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    int arr[n];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k-1] && arr[i] != 0)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}