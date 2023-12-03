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
            if (str[i] == 'D' or 'I' or 'E' or 'L' or 'O' or 'U' or 'S')
            {
                result += str[i];
            }
        }
    }

    cout << result.length() << endl;

    return 0;
}
