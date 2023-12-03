#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str = "DIU_SEDULOUS";
    int n = str.length();
    string result = "";
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '_')
        {
            result += str[i];
        }
    }
    string result2 = "";
    int m = result.length();

    for (int i = 0; i < m; i++)
    {
        do
        {
            result2 += result[i];
            i++;
        } while (i < m && (result[i] != 'D' && result[i] != 'U' && result[i] != 'S'));
    }

    cout << result2.length() << endl;
    cout << result2 << endl;

    return 0;
}
