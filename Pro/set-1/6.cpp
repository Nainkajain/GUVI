#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, count_triplet = 0;
    cin>>m;
    vector<int> vec(m);
    for(int i=0; i<m; i++){
        cin>>vec[i];
    }

    for(int i=0; i<m-2; i++){
        for(int j=i+1; j<m-1; j++){
            if(vec[i] < vec[j]){
                for(int k=j+1; k<m; k++){
                    if(vec[j] < vec[k]){
                        count_triplet++;
                    }
                }
            }
        }
    }
    cout<<count_triplet;
    return 0;
}
