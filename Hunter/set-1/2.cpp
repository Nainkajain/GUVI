#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a, temp;
    cin>>a;
    vector<int> arr(a);
    string output="";
    for(int i=0; i<a; i++){
        cin>>temp;
        arr[i]=temp;
    }
    sort(arr.begin(), arr.end());
    for(int i=a-1; i>-1; i--){
        output += to_string(arr[i]);
    }
    cout<<output;
    return 0;
}
