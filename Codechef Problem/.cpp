#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // Input the outcomes of shots
        int A[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> A[i];
        }

        // Count the goals for each team
        int team1 = 0;
        int team2 = 0;
        for (int i = 0; i < 10; i += 2) // Corrected loop index
        {
            if (A[i] == 1)
            {
                team1++;
            }
        }
        for (int i = 1; i < 10; i += 2) // Corrected loop index
        {
            if (A[i] == 1)
            {
                team2++;
            }
        }

        // Determine the winner or if it's a draw
        if (team1 > team2)
        {
            cout << "1" << endl;
        }
        else if (team2 > team1)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
