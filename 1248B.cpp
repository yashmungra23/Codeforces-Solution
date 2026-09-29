#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    sort(arr.begin() , arr.end());

    long long fsum = 0LL;
    for(int i = 0 ; i < n/2 ; i++){
        fsum += arr[i];
    }
    long long ssum = 0LL;

    for(int i = n/2 ; i < n ; i++){
        ssum += arr[i];
    }
    long long ans;
    ans = (fsum * fsum) + (ssum * ssum);

    cout << ans << endl;

    return 0;
}