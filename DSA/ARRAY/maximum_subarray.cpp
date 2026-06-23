#include <bits/stdc++.h>
using namespace std;

int MaxSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        currentSum += nums[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    vector<int> array({-2, 1, -3, 4, -1, 2, 1, -5, 4});

    int sum = MaxSubArray(array);
    cout << "Sum is: " << sum << endl;

    return 0;
}