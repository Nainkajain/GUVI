#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    long int sum = 0;
    cin>>x;
    vector<int> vec(x);
    vector<long int> sum_v(x+1);
    sum_v[0] = 0;
    for(int j=0; j<x; j++){
        cin>>vec[j];
        sum_v[j+1] = 0;
        for(int j=0; j<j; j++){
            if(vec[j]>vec[j])
                sum_v[j+1] += vec[j];
        }
        sum += sum_v[j+1];
    }
    cout<<sum<<endl;
    return 0;
}
