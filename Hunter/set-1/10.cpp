#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, m;
    cin>>p>>m;
    vector<int> a(p);
    vector<int> b(m);
    for(int i=0; i<p; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    sort(b.begin(), b.end());
    int j=0, i=0;
    while(j<m && i<p){
        if(b[j]==a[i]){
            j++;
        }
        i++;
    }
    if(j==m)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
