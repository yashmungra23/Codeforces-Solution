#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    string str = "";
    for(char c : s){
        if(c != '+'){
        str.push_back(c);
    }
    }
    sort(str.begin() , str.end());
    cout << str[0];
    int n = str.size() ;
    for(int i = 1 ; i < n ; i++){
        cout << '+' << str[i];
    }
    return 0;
}