#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    map<int,int> m;
    vector<int> vec(x);
    for(int i=0; i<x; i++){
        cin>>vec[i];
        if(m.find(vec[i])!=m.end())
            m[vec[i]] += 1;
        else
            m.insert(make_pair(vec[i], 1));
    }

    int candies = 1, sum = 0;
    for(map<int,int>::iterator it=m.begin(); it!=m.end(); it++){
        sum += it->second * candies;
        candies++;
    }
    cout<<sum;
    return 0;
}
