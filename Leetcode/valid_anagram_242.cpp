/**
 * Author: Imran Parthib
 */
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        bool used[t.size()] = {false}; // keep track of matched characters in t

        for (int i = 0; i < s.size(); i++)
        {
            bool found = false;
            for (int j = 0; j < t.size(); j++)
            {
                if (!used[j] && s[i] == t[j])
                {
                    used[j] = true;
                    found = true;
                    break;
                }
            }
            if (!found)
                return false;
        }
        return true;
    }
};
int main()
{
    Solution sol;
    string s, t;
    cin >> s >> t;
    int result = sol.isAnagram(s, t);
    if (result == 0)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << "True" << endl;
    }
    return 0;
}