#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0 ; i <= 1000 ; i++){
        if(i % 4 == 0 || i % 7 == 0 || i % 47 == 0 || i % 74 == 0 || i % 447 == 0 || i % 474 == 0 || i % 744 == 0 || i % 777 == 0
         || i % 444 == 0 || i % 774 == 0 || i % 747 == 0 || i % 477 == 0){
            if(i == n){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
}