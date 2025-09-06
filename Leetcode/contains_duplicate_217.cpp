#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;
        for (auto num : nums)
        {
            if (seen.count(num))
            {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 1}; // test input
    Solution sol;
    bool result = sol.containsDuplicate(nums);

    cout << (result ? "Contains duplicate" : "No duplicate") << endl;
    return 0;
}
