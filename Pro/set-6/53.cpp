#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    bool visited[26];
    memset(visited, false, sizeof(visited));
    getline(cin, st);
    transform(st.begin(), st.end(), st.begin(), ::tolower);
    int total = 0;
    for(int i=0; i<st.length(); i++){
        if(st[i]>='a' && st[i]<='z' && !visited[st[i]-'a']){
            total++;
            visited[st[i]-'a'] = true;
        }
    }
    if(total==26)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
