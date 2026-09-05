#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x = 0;

    while (t--)
    {
        string s = "";
        cin >> s;

        if (s == "++X" || s == "X++")
            x++;
        if (s == "--X" || s == "X--")
            x--;
    }
    cout << x << endl;
    return 0;
}