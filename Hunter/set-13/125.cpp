#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int arr[50]={0};
    for(int i=0; i<s.length(); i++){
        arr[s[i]-65]+=1;
    }
    for(int i=0; i<s.length(); i++){
        if(arr[s[i]-65]==1)
            cout<<s[i];
    }
    return 0;
}
