    #include <bits/stdc++.h>
    #include <algorithm>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        int odd = 0;
        int even = 0;
        int oddidx = 0;
        int evenidx = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0){
                even++;
                evenidx = i;
            }
            else{
                odd++;
                oddidx = i;
            }
        }
        if(even == 1){
            cout << evenidx + 1 << endl;
        }
        else{
            cout << oddidx + 1<< endl;
        }
        return 0;
    }