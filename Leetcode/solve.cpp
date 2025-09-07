#include <iostream>
using namespace std;

int main()
{
    string s = "Ratett";

    // number of iterations way

    for (auto str : s)
    {
        cout << str << endl;
    }

    // using simple for
    cout << "Using For Loop" << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}