#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string st;
        int moves = 0;

        for (char c : s)
        {
            if (!st.empty() && st.back() != c)
            {
                st.pop_back();
                moves++;
            }
            else
            {
                st.push_back(c);
            }
        }
        if (moves % 2 == 1)
            cout << "DA\n";
        else
            cout << "NET\n";
    }

    return 0;
}