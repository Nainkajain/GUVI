#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,temp;
    cin>>n;
    vector<int> v;
    for(int k=0; k<n; k++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int k=0; k<n/2; k++){
        cout<<v[n-k-1]<<" "<<v[k]<<" ";
    }
    if(n%2){
        cout<<v[n/2];
    }
    return 0;
}
