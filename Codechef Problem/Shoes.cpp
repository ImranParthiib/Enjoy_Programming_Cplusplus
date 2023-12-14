#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t;
    cin >> t;
    int totalshoes;
    for (int i = 0; i <= t; i++)
    {
        cin >> n;
        cin >> m;

        if (m > n)
        {
            totalshoes = n;
            cout << totalshoes << endl;
        }
        else
        {
            totalshoes = (n * 2) - m;
            cout << totalshoes << endl;
        }
    }
    return 0;
}