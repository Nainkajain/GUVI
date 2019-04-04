// Manacher's algorithm
#include<bits/stdc++.h>

using namespace std;

int longestPalindrome(int center, int k, string str){
    if(center-k==-1 || center+k==str.length() || str[center-k]!=str[center+k]){
        return 0;
    }
    if(str[center-k]=='|'){
        return longestPalindrome(center, k+1, str);
    }
    return 1+longestPalindrome(center, k+1, str);
}

void printPalindromes(string str){
    int length;
    string new_string  = "";
    string output = "";

    set<string> s;
    s.insert("");
    for(int k=0; k<str.length()-1; k++){
        new_string.push_back(str[k]);
        new_string.push_back('|');
    }
    new_string.push_back(str[str.length()-1]);
    for(int k=0; k<new_string.length(); k++){
        length = longestPalindrome(k, 1, new_string);
        if(1<length){
            int start = k - length*2, finish = k + length*2 + 1;
            while(start < finish){
                output = "";
                for(int k=start; k<finish; k++){
                    if(new_string[k] != '|')
                        output.push_back(new_string[k]);
                }
                start += 2;
                finish -= 2;
                if(output.length()>1)
                    s.insert(output);
            }
        }
    }
    s.erase(s.find(""));
    vector<string> out;
    for(auto it = s.begin(); it!=s.end(); it++){
        out.push_back(*it);
    }
    sort(out.begin(), out.end(), [](string s1, string s2){
        if(s1.length()==s2.length())
            return s1 < s2;
        return s1.length()<s2.length();
    });
    for(int k=0; k<out.size(); k++){
        cout<<out[k]<<endl;
    }
}

int main(){
    string input;
    cin>>input;
    printPalindromes(input);
    return 0;
}
