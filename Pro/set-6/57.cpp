#include<bits/stdc++.h>
using namespace std;

int main(){
    string str, str2;
    cin>>str>>str2;
    bool flag=false;
    for(int j=0; j<str.length()-1; j++){
        for(int j=0; j<str2.length()-1; j++){
            if(str.compare(j, 2, str2, j, 2) == 0){
                flag = true;
                break;
            }
        }
        if(flag)
            break;
    }
    if(flag)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
