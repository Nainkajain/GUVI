#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    string str1, str2;
    cin>>str1>>str2;
    int ss1, ss2;
    bool flag=false;
    ss1 = str1.length();
    ss2 = str2.length();
    for(int i=0; i<ss1-ss2+1; i++){
        if(str1.compare(i,ss2,str2)==0){
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
