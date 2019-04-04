#include<bits/stdc++.h>
using namespace std;

int numberOfWays( string s, int l, int r){
    if(l==r)
        return 1;
    int extra = 0;
    if(l+1<r && s[l]!='0' && stoi(s.substr(l, 2)) <= 26)
        extra = numberOfWays(s, l+2, r);
    return extra + numberOfWays(s, l+1, r);
}

int main(){
    string a;
    cin>>a;
    cout<<numberOfWays(a, 0, a.size());
    return 0;
}
