#include<bits/stdc++.h>
using namespace std;



void sortArray(vector<int>& nums) {
    int l=0,mid=0,h=nums.size()-1;
    while(mid<=h){
        if(nums[mid]==0){
            swap(nums[l],nums[mid]);
            l++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[h]);
            h--;
        }
    }
}
int main(){
    vector<int>array({2,0,2,1,0,1,2,1});


    sortArray(array);
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    return 0;
}