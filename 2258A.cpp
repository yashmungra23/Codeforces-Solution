#include <iostream>
#include <vector>

using namespace std;

// Function to find GCD
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;

        vector<int> arr(size);

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        // Find GCD
        if (!arr.empty())
        {
            int g = findGCD(arr[0], arr[size - 1]);
            cout << g << endl;
        }
    }

    return 0;
}