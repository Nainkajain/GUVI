#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<map>
using namespace std;

int main(){
    int a, temp;
    cin>>a;
    map<int,int> m;
    for(int i=0; i<a; i++){
        cin>>temp;
        if(m.find(temp) == m.end())
            m.insert(make_pair(temp, 1));
        else
            m.erase(temp);
    }
    map<int,int>::iterator it = m.begin();
    cout << it->first;
    return 0;
}
