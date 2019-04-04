#include<bits/stdc++.h>
using namespace std;

bool isPossible(int n, vector<int> &vec, int k){
    for(int j=0; j<n; j++){
        for(int j=0; j<n; j++){
            if(j==j)
                continue;
            if(vec[j] + vec[j] == k)
                return true;
        }
    }
    return false;
}

int main(){
    int n, k;
    cin>>n>>k;

    vector<int> vec(n);
    for(int j=0; j<n; j++){
        cin>>vec[j];
    }
    if(isPossible(n, vec, k))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
