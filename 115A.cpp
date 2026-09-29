#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int ans = n;

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == -1){
            ans += (-1);
        }
    }
    cout << ans << endl;
    return 0;
}