#include<bits/stdc++.h>
using namespace std;

void changeRowCol(int row, int col, vector<vector<int>> &vec){
    for(int n=0; n<vec.size(); n++)
        vec[n][col] = 0;
    for(int n=0; n<vec[row].size(); n++)
        vec[row][n] = 0;
}

int main(){
    int row, col;
    cin>>row>>col;

    vector<vector<int>> vec(row, vector<int>(col));
    for(int n=0; n<row; n++){
        for(int m=0; m<col; m++){
            cin>>vec[n][m];
            if(vec[n][m]==0)
                vec[n][m] = INT_MAX;
        }
    }

    for(int n=0; n<row; n++)
        for(int m=0; m<col; m++)
            if(vec[n][m] == INT_MAX)
                changeRowCol(n, m, vec);

    for(int n=0; n<row; n++){
        for(int m=0; m<col; m++){
            cout<<vec[n][m]<<" ";
        }
        cout<<endl;
    }
}
