#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    vector<int> vec(x);
    for(int i=0; i<x; i++)
        cin>>vec[i];

    sort(vec.begin(), vec.end(), [](int a, int b){
        bitset<16> b1(a), b2(b);
        if(b1.count()!=b2.count())
            return b1.count()>b2.count();
        else
            return a>b;
    });
    for(int i=0; i<x; i++){
        cout<<vec[i]<<endl;
    }
    return 0;
}
