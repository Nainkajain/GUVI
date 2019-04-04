#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, k;
    cin>>m>>k;
    vector<int> a(m);
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    cout<<a[k-1];
    return 0;
}
