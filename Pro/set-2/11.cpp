#include<bits/stdc++.h>
using namespace std;

string difference(string str1, string str2){
    string str = "";
    int x = str1.length(), y = str2.length();

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;

    for (int j=0; j<y; j++){
        int sub = ((str1[j]-'0')-(str2[j]-'0')-carry);
        if (sub < 0){
            sub = sub + 10;
            carry = 1;
        }else
            carry = 0;

        str.push_back(sub + '0');
    }

    for (int j=y; j<x; j++){
        int sub = ((str1[j]-'0') - carry);
        if (sub < 0){
            sub = sub + 10;
            carry = 1;
        }else
            carry = 0;
        str.push_back(sub + '0');
    }
    reverse(str.begin(), str.end());
    return str;
}

string divide(string number, int divisor){
    string ans;
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
       temp = temp * 10 + (number[++idx] - '0');
    while (number.size() > idx){
        ans += (temp / divisor) + '0';
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }
    if (ans.length() == 0)
        return "0";
    return ans;
}

string multiply(string num1, string num2){
    int x = num1.size();
    int y = num2.size();
    if (x == 0 || y == 0)
    return "0";

    vector<int> result(x + y, 0);
    int i_n1 = 0;
    int i_n2 = 0;

    for (int j=x-1; j>=0; j--){
        int carry = 0;
        int x = num1[j] - '0';

        i_n2 = 0;
        for (int j=y-1; j>=0; j--){
            int y = num2[j] - '0';
            int sum = x*y + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }

        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int j = result.size() - 1;
    while (j>=0 && result[j] == 0)
        j--;
    if (j == -1)
        return "0";

   string s = "";
    while (j >= 0)
        s += std::to_string(result[j--]);

    return s;
}

int main(){
    string str;
    cin>>str;
    string n = divide(str, 2);
    str = difference(str, "1");
    cout << multiply(str, n);
    return 0;
}
