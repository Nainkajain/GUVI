#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<iterator>
using namespace std;

int main(){
    int m;
    long int count=0;
    cin>>m;
    vector<int> arr(m);
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    for(int k=2; k<m; k++){
        for(int j=1; j<k; j++){
            for(int i=0; i<j; i++){
                if(arr[k] == arr[j]+arr[i] ){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
