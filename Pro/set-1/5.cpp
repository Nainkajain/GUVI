/* it ask for possible case where
s1={y,z} and s2={z,y}
thus, for y!=z  x must be atleast 2 time multiple
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int x,y,z;
    cin>>x>>y>>z;
    if((x/2)%(y+z)==0 && x%2==0)
        cout<<"YES";
    else if(y==z && (x/2)%y==0 && x%2==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
