#include<bits/stdc++.h>
using namespace std;
vector<int>findMissingRepeatValue(vector<vector<int>>& arr){
  int n=arr.size();
  vector<int>freq(n*n+1,0);
  int repeated=-1;
  int missing=-1;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        freq[arr[i][j]]++;
        if(freq[arr[i][j]]==2){
            repeated=arr[i][j];
        }
  
    }
  }
  for(int i=1;i<=n*n;i++){
    if(freq[i]==0){
        missing=i;
        break;
    }
  }
  return {missing,repeated};
}

int main(){
    vector<vector<int>> arr = {{1,2,3}, {4,5,5}, {6,7,8}};

    vector<int> ans = findMissingRepeatValue(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}