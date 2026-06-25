#include<bits/stdc++.h>
using namespace std;
void mergearray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=m-1, j=n-1, k=m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k--]=nums1[i--];
        }
        else{
            nums1[k--]=nums2[j--];
        }
    }
    while(i>=0){
        nums1[k--]=nums1[i--];
    }
    while(j>=0){
        nums1[k--]=nums2[j--];
    }
}

int main(){
    vector<int>nums1({1,2,3,0,0,0}), nums2({2,5,6});
    int m=3, n=3;
    mergearray(nums1, m, nums2, n);
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}