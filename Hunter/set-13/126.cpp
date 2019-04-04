#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    bool flag=false;
    getline(cin,s);
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i]) && (i==0 || s[i-1]==' ')){
            flag=true;
        }
    }
    if(flag){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}
