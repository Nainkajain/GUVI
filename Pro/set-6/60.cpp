#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
	long long P = 3;
	while(a>P){
		a -= P;
		P *= 2;
	}
	cout << P - a + 1 << endl;
    return 0;
}
