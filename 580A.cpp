#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int>dp(n,1) ;
    int ans = 1;

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
    for(int i = 1 ; i < n ; i++){
        if(arr[i] >= arr[i - 1]){
            dp[i] = dp[i-1] + 1;
        }
        ans = max(ans, dp[i]);
    }
    
    cout << ans << endl;
    return 0;
}