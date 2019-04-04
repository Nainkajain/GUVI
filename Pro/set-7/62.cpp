#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string str;
int longestPalindrome(int center, int n, int j){
    if(center-j==-1 || center+j==n || str[center-j]!=str[center+j]){
        return 0;
    }
    if(str[center-j]=='|'){
        return longestPalindrome(center, n, j+1);
    }
    return 1+longestPalindrome(center, n, j+1);
}

int main(){
    string input;
    cin>>input;
    int n,max_length=0,length;
    n = input.length();
    str="";
    for(int j=0; j<n-1; j++){
        str.push_back(input[j]);
        str.push_back('|');
    }
    str.push_back(input[n-1]);
    for(int j=0; j<str.length(); j++){
        length = longestPalindrome(j,str.length(),1);

        if(str[j]=='|')
            length = length*2;
        else
            length = length*2 + 1;

        if(max_length<length)
            max_length=length;
    }

    cout<<input.size() - max_length;
    return 0;
}
