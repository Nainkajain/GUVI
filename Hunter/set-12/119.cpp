#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int m;
    long int count=0;
    cin>>m;
    vector<int> arr(m);
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    for(int i=1; i<m; i++){
        for(int j=0; j<i; j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
