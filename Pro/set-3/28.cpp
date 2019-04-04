#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, non_dis = 1;
    cin>>m;
    vector<int> vec(m);
    for(int i=0; i<m; i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    long int sum = vec[0];
    for(int i=1; i<m; i++){
        if(vec[i]>=sum)
            non_dis++;
        sum += vec[i];
    }
    cout<<non_dis<<endl;
	return 0;
}
