#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<map>
using namespace std;

int main(){
    int a, temp;
    cin>>a;
    map<int,int> m;
    for(int i=0; i<a; i++){
        cin>>temp;
        if( (temp+i)%2 )
            cout<<temp<<" ";
    }
    return 0;
}
