#include<bits/stdc++.h>

using namespace std;

int main(){
    string n, n1;
    cin>>n>>n1;
    int cost = max(n.length(), n1.length()) - min(n.length(), n1.length());
    for(int j=0; j<min(n.length(), n1.length()); j++){
        if(n[j] == n1[j])
            continue;
        cost++;
    }
    cout<<cost;
    return 0;
}
