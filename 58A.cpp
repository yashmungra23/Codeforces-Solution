#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string str = "hello";
    int i = 0, j = 0;
    while (i < s.length() && j < str.length()) 
    {
        if(s[i] == str[j]){
            j++;
        }

        if(j == 5){
            cout << "YES" << endl;
            return 0;
        }
        i++;
    }
    cout << "NO" << endl;
    return 0;
}