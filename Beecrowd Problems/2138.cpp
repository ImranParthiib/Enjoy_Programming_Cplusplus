#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    str = "15000228888888";
    int n = str.size();

    string temp3;
    for (int i = 0; i < n; i++)
    {
        int temp1 = 0;
        for (int j = i + 1; j < n; j++)
        {
            int temp2 = 0;
            if (str[i] == str[j])
            {
                temp1++;

                if (temp1 > temp2)
                {
                    int temp2 = temp1;
                    temp3 = str[i];
                }
            }
        }
    }
    cout << temp3 << endl;

    return 0;
}