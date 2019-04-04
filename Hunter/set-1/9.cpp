#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, temp;
    cin>>a;
    vector<int> vec(a);
    for(int i=0; i<a; i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    int mindiff = INT_MAX;
    int a,b;
    for(int i=0; i<a-1; i++){
        for(int j=i+1; j<a; j++){
            temp = vec[j] + vec[i];
            if(temp<mindiff && temp>=0){
                mindiff = temp;
                a=vec[j];
                b=vec[i];
            }
        }
    }
    cout<<a<<" "<<b;
    return 0;
}
