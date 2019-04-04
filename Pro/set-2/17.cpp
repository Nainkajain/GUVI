#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, k;
    cin>>m>>k;

    vector<int> vec(m);
    for(int i=0; i<m; i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    bool flag = true;
    for(int i=0; i<m-1; i++){
        if(find(vec.begin()+i, vec.end(), k-vec[i]) != vec.end()){
            flag = false;
            cout<<"yes";
            break;
        }
    }
    if(flag)
        cout<<"no";
    return 0;
}
