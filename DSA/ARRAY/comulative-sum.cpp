#include <bits/stdc++.h>
using namespace std;

void comulativeSum(vector<int> &ans, int n)
{

    for (int i = 1; i < n; i++)
    {

        ans[i] += ans[i - 1];
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    comulativeSum(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}