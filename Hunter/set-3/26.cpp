#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int vec[n];
    for(int j=0; j<n; j++){
        cin>>vec[j];
    }
    for(int j=n-1; j>0; j--){
        cout<<vec[j]<<"->";
    }
    cout<<vec[0];
    return 0;
}
