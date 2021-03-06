#include<bits/stdc++.h>
using namespace std;

set<string> set1;

void swap(string &s,int x,int y){
    char temp=s[x];
    s[x]=s[y];
    s[y]=temp;
}

void permute(string &s,int l,int r){
    if(l==r){
        set1.insert(s);
        return;
    }
    for(int i=l;i<=r;i++){
        swap(s,l,i);
        permute(s,l+1,r);
        swap(s,l,i);
    }
}

int main(){
    string s;  cin>>s;
    permute(s,0,s.length()-1);
    for(auto i : set1){
        cout<<i<<endl;
    }
}
