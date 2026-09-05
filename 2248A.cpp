#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int pos0 = -1;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '0'){
                for(int j = i + 1 ; j < s.size() ; j++){
                    if(s[j] == '1'){
                        pos0 = i;
                        break;
                    }
                }
                if(pos0 != -1) break;
            }
        }

        if(pos0 == -1){
            pos0 = s.find('0');
        }

        s.erase(pos0 , 1);

        int pos1 = -1;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '1'){
                for(int j = i + 1 ; j < s.size() ; j++){
                    if(s[j] == '0'){
                        pos1 = i;
                        break;
                    }
                }
                if(pos1 != -1) break;
            }
        }
        if(pos1 == -1){
            pos1 = s.find('1');
        }

        s.erase(pos1 , 1);

        cout << s << '\n';
    }

    return 0;
}