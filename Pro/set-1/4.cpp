#include<bits/stdc++.h>

using namespace std;

int main(){
    string x, y;
    cin>>x>>y;

    string min_string = min(x, y);
    string max_string = max(x, y);
    int i=0, cost=0;

    for(i=0; i<min_string.length(); i++){
        if(x[i] == y[i])
            continue;
        cost += abs(x[i] - y[i]);
    }

    while(i<max_string.length()){
        cost += max_string[i] - 96;
        i++;
    }
    cout<<cost;
    return 0;
}
