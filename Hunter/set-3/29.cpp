#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n, sum=0, temp; // empty sub array
    cin>>n;
    for(int k=0; k<n; k++){
        cin>>temp;
        if(temp>0)
            sum += temp;
    }
    cout<<sum;
    return 0;
}
