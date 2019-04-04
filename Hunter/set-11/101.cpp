#include<bits/stdc++.h>
using namespace std;

bool isPrime(int k){
    for(int i=2; i<sqrt(k); i++){
        if(k%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int k;
    cin>>k;
    int arr[3];

    if(k&1){ arr[0] = 2; k -= 2;
    }else{ arr[0] = 3; k -= 3; }

    for(int i=2; i<k-1; i++){
        if(isPrime(i) && isPrime(k-i)){
            arr[1] = i;
            arr[2] = k-i;
            break;
        }
    }
    sort(arr, arr+3);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}
