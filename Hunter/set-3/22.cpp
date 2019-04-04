#include<bits/stdc++.h>
using namespace std;

long int getProduct(vector<long int> vec){
    long int product = 1;
    for(int j=0; j<vec.size(); j++){
        product *= vec[j];
    }
    return product;
}

int main(){
    int n;
    cin>>n;

    vector<long int> vec(n);
    for(int j=0; j<n; j++){
        cin>>vec[j];
        if(vec[j]==0)
            vec[j]=1;
    }

    long int product = getProduct(vec);

    for(int j=0; j<n; j++)
        cout<<(long int)product/vec[j]<<" ";

    return 0;
}
