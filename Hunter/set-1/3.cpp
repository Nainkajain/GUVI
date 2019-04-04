#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<set>
using namespace std;

int main(){
    int a, temp;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>temp;
        if(temp==i)
            cout<<temp<<" ";
    }
    return 0;
}
