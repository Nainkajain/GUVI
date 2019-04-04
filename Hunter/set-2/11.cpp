#include<bits/stdc++.h>
using namespace std;

int main(){
    string string1;
    getline(cin, string1);
    istringstream s(string1);
    vector<string> st;
    do{
        s>>string1;
        st.push_back(string1);
    }while(s);
    for(int i=0; i<st.size()-1; i++){
        reverse(st[i].begin(), st[i].end());
        cout << st[i] << " ";
    }
    return 0;
}
