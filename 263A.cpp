#include <iostream>
using namespace std;

int main()
{
    int mat[5][5];
    int count = 0;
    int a, b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(a - 2) + abs(b - 2) << endl;

    return 0;
}