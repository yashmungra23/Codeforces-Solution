#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    for(int i = 2 ; i < n ; i++){
        if(arr[i-1] % 2 == arr[i+1] % 2){
            arr[i] = arr[i-1] - arr[i] + arr[i+1];
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}