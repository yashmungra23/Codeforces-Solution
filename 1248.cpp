#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin() , arr.end());

    int fsum = 0;
    for(int i = 0 ; i < n/2 ; i++){
        fsum += arr[i];
    }
    int ssum = sum - fsum;

    int ans = (fsum * fsum) + (ssum * ssum);

    cout << ans << endl;

    return 0;
}