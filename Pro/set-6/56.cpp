#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n, k, temp, free_time=0, days=0;
    cin>>n>>k;
    for(int j=0; j<n; j++){
        cin>>temp;
        if(free_time<k){
            free_time += 86400-temp;
            days++;
        }
    }
    cout<<days;
    return 0;
}
