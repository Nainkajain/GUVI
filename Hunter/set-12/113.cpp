#include<iostream>
using namespace std;

int main(){
    int k;
    cin>>k;
    if(!(k&(k-1)))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
