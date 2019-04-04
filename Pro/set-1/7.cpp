#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin>>m;
    int log_n = log2(m);
    if(pow(2, log_n) == m)
        cout<<0;
    else
        cout<<pow(2, log_n+1) - m;
    return 0;
}
