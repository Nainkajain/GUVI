#include<bits/stdc++.h>
using namespace std;

void buildLowestNumberRec(string string1, int n, string &res) {
	if (n == 0) {
		res.append(string1);
		return;
	}
	int len = string1.length();
  	if (len <= n)
		return;
	int minIndex = 0;
	for (int i = 1; i<=n ; i++)
		if (string1[i] < string1[minIndex])
			minIndex = i;
	res.push_back(string1[minIndex]);
	string new_str = string1.substr(minIndex+1, len-minIndex);
	buildLowestNumberRec(new_str, n-minIndex, res);
}
string buildLowestNumber(string string1, int n) {
  	if(n>=string1.length())
      return "0";
	string res = "";
	buildLowestNumberRec(string1, n, res);
	return res;
}

int main(){
	string string1;
	int n;
	cin>>string1>>n;
	cout << buildLowestNumber(string1, n);
	return 0;
}
