#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        int i = 1;
        int l = 1;
        int sum = 0;
        while(arr.size() < n){
            for(int x : arr){
                sum += x;
                // l = std::lcm(l,x);
            }
        
            if(sum % i == 0 && l % i == 0) arr.push_back(i);
            i++;
        }
        for(int i = 0 ; i < arr.size() ; i++){
            cout << arr[i] << " ";
        }
    }

    return 0;
}