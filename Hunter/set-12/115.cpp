#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<array>
using namespace std;

bool isPrime(int k){
    for(int i=2; i<=(int)sqrt(k); i++){
        if(!(k%i))
            return false;
    }
    return true;
}

vector<bool> primeNumbers(int k){
    vector<bool> primes(k+1, false);
    for(int i=2; i<=k; i++){
        primes[i]=isPrime(i);
    }
    return primes;
}

int main(){
    int k, i=2, max=1001, count=0;
    cin>>k;
    vector<bool> primes = primeNumbers(k-2);
    while( i<max ){
        if(primes[i] && primes[k-i]){
            count += 1;
            max = k-i;
            cout<<i<<" "<<k-i<<endl;
        }
        i++;
    }
    cout<<count;
    return 0;
}
