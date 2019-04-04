#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<set>
using namespace std;

int main(){
    int a, temp;
    cin>>a;
    vector<int> vec(a);
    for(int i=0; i<a; i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    set<int> s;
    for(int i=1; i<a; i++){
        if(vec[i]==vec[i-1])
            s.insert(vec[i]);
    }
    if(s.size() == 0)
        cout<<"unique";
    for(auto i : s){
        cout<<i<<" ";
    }
}
