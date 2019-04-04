#include<bits/stdc++.h>
using namespace std;

int main(){
    int p, q, temp, max_count=0;
    cin>>p>>q;

    vector<vector<int>> count(p+1, vector<int>(q+1));
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>temp;
            if(i==0 || j==0 || temp == 0){
                count[i+1][j+1] = temp;
            } else {
                count[i+1][j+1] = 1 + min({count[i][j+1] , count[i+1][j], count[i][j]});
            }
            max_count = max(max_count, count[i+1][j+1]);
        }
    }
    for(int i=0; i<max_count; i++){
        for(int j=0; j<max_count; j++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
