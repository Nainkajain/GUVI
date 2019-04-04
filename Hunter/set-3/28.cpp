#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string string1) {
    if(string1.length() <= 1)
        return true;
    if(string1[0] == string1[string1.length()-1] && string1.length()>0)
        return isPalindrome(string1.substr(1,string1.length()-2));
    return false;
}

int main(){
    string input;
    cin>>input;
    bool is_present[26] = {false};
    for(int i=0; i<input.length(); i++){
        if(is_present[input[i]-'a'])
            continue;
        cout<<input[i];
        is_present[input[i]-'a'] = true;
    }
    return 0;
}
