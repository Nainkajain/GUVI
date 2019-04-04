#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool isPrime(int n){
    for(int k=2; k<=((int)sqrt(n)); k++){
        if(!(n%k))
            return false;
    }
    return true;
}
int main(){
    int n, sum=0;
    cin>>n;
    for(int k=3; k<=n; k+=10){
        if(isPrime(k))
            sum+=k;
    }
    cout<<sum;
    return 0;
}
