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

vector<bool> primeNumbers(){
    vector<bool> primes(46, false);
    for(int i=2; i<=45; i++){
        primes[i]=isPrime(i);
    }
    return primes;
}

int digitSum(int k){
    if(k<10)
        return k;
    return k%10 + digitSum(k/10);
}

int main(){
    vector<bool> primes = primeNumbers();
    int a, b, count=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        count += primes[digitSum(i)];
    }
    cout<<count;
    return 0;
}
