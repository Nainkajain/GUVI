#include<bits/stdc++.h>
using namespace std;

int maxSumWithoutNeighbours(vector<int> vec){
    int include = vec[0];
    int exclude = 0;
    int temp_exclude = 0;
    for(int k=1; k<vec.size(); k++){
        temp_exclude = max(include , exclude);
        include = exclude + vec[k];
        exclude = temp_exclude;
    }
    return max(include, exclude);
}

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int k=0; k<n; k++)
        cin>>vec[k];
    cout<<maxSumWithoutNeighbours(vec);
    return 0;
}
