#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input;
    cin>>input;
    int s = 0;
    for( int i=0; i<input.size(); i++){
        s += (int)input[i];
    }
    cout<<s;
    return 0;
}
