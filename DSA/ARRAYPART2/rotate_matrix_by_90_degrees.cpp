#include<bits/stdc++.h>
using namespace std;


void rotateArray(vector<vector<int>>& matrix) {
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);

        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main(){

   vector<vector<int>> matrix12 = {{1,2,3},{4,5,6},{7,8,9}};
    rotateArray(matrix12);
    for(int i=0;i<matrix12.size();i++){
        for(int j=0;j<matrix12[i].size();j++){
            cout<<matrix12[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}