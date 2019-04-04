#include<iostream>
#include<algorithm>
#include<map>
#include<iterator>
using namespace std;

map<int,int> m;

int main(){
    int m, temp, sum=0;
    cin>>m;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>temp;
            if(i==j){
                sum+=temp;
            }
        }
    }
    cout<<sum;
    return 0;
}
