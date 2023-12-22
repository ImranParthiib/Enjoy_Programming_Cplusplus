#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 3;
    // cin >> N;
    int A[N];
    for (int i = 0; i <= N; i++)
    {
        A[i - 1] = i + 0;
    }
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}