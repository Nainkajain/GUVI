#include<bits/stdc++.h>
using namespace std;

int getMaxValue(int row, int col, vector<vector<int>> &vec){
    vector<vector<int>> val(row+1, vector<int>(col+1));
    for(int j=0; j<=row; j++){
        for(int j=0; j<=col; j++){
            if(j==0 || j==0){
                val[j][j] = 0;
                continue;
            }
            val[j][j] = max(val[j][j-1], val[j-1][j]) + vec[j-1][j-1];
        }
    }
    return val[row][col];
}

int main(){
    int row, col;
    cin>>row>>col;

    vector<vector<int>> vec(row, vector<int>(col));
    for(int j=0; j<row; j++){
        for(int j=0; j<col; j++){
            cin>>vec[j][j];
        }
    }
    cout<<getMaxValue(row, col, vec);
    return 0;
}
