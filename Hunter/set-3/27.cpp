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
    while(true){
        if(isPalindrome(input)){
            input = input.substr(0, input.length()-1);
        }else{
            break;
        }
    }
    cout<<input;
    return 0;
}
