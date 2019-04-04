#include<bits/stdc++.h>
using namespace std;

int main(){
    string string1;
    getline(cin, string1);
    stack<char> s;
    int _size = string1.size()/2;
    for(int i=0; i<_size; i++)
        s.push(string1[i]);
    for(int i=string1.size() - _size; i<string1.size(); i++){
        char c=s.top();
        s.pop();
        if(c!=string1[i])
            break;
    }
    if(s.empty())
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
