#include<bits/stdc++.h>
using namespace std;


vector<int>generatedRow(int row){
    long long ans=1;
    vector<int>ansRow;
    ansRow.push_back(1);
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans=ans/i;
        ansRow.push_back(ans);
    }
    return ansRow;
}
int main(){
    int numRows;
    cout<<"Enter the number of rows: "<<endl;
    cin>>numRows;
    vector<vector<int>>ans;
    for(int row=1;row<=numRows;row++){
        ans.push_back(generatedRow(row));
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}