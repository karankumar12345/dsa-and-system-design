#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& nums) {
    int maxSum=0;
    int first=nums[0];
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<first)
        {
            first=nums[i];
        }
        else{
            maxSum=max(maxSum,nums[i]-first);
        }
    }
    return maxSum;
}

int main(){
    vector<int> nums({7,1,5,3,6,4});
    int profit=maxProfit(nums);
    cout<<"Max profit is: "<<profit<<endl;
    return 0;
}