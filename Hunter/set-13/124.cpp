#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    int m;
    cin>>m;
    for(int i=m; i>0; i--){
        for(int j=1; j<i; j++){
            cout<<1<<" ";
        }
        cout<<1<<endl;
    }
    return 0;
}
