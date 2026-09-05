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
            vector<int> arr(3);
            int count = 0;
            for (int i = 0; i < 3; i++)
            {
                cin >> arr[i];
            }

            sort(arr.begin(), arr.end());

            while (arr[0] != arr[1] || arr[1] != arr[2])
            {
                if (arr[0] == arr[1] || arr[1] == arr[2])
                {
                    break;
                }

                arr[0]++;
                arr[2]--;
                count++;
            }
            cout << count << endl;
        }

        return 0;
    }