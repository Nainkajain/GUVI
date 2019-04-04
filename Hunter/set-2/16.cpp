#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, k, n1=INT_MAX, n2=INT_MAX, n3=INT_MAX, temp;
    cin >> m >> k ;

    for( int i=0; i<m; i++ ){
        cin >> temp;
        if(temp==k)
            continue;
        if(abs(n1-k)>abs(temp-k)){
            n3=n2;
            n2=n1;
            n1=temp;
        }else if( abs(n2-k) > abs(temp-k) ){
            n3=n2;
            n2=temp;
        }else if( abs(n3-k) > abs(temp-k) ){
            n3=temp;
        }
    }
    cout<<n1<<" "<<n2<<" "<<n3;
    return 0;
}
