#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    while (t--) {
        // Read the size of the array and the array itself
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // Calculate the sum of the array elements
        int total_sum = 0;
        for (int num : arr) {
            total_sum += num;
        }

        // Calculate the remainder when total sum is divided by 3
        int rem = total_sum % 3;

        // If remainder is 0, no moves are needed
        if (rem == 0) {
            cout << "0" << endl;
        }
        // If remainder is 1, need to remove one element with remainder 1 or two elements with remainder 2
        else if (rem == 1) {
            if (find(arr.begin(), arr.end(), 1) != arr.end()) {
                cout << "1" << endl;
            }
            else if (count(arr.begin(), arr.end(), 2) >= 2) {
                cout << "2" << endl;
            }
            else {
                cout << "1" << endl;
            }
        }
        // If remainder is 2, need to remove one element with remainder 2 or two elements with remainder 1
        else {
            if (find(arr.begin(), arr.end(), 2) != arr.end()) {
                cout << "1" << endl;
            }
            else if (count(arr.begin(), arr.end(), 1) >= 2) {
                cout << "2" << endl;
            }
            else {
                cout << "1" << endl;
            }
        }
    }

    return 0;
}
