#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int j=0; j<n; j++){
        cin>>vec[j];
    }
    vector<int> arr(n);
    arr[n-1]=1;
    for(int j=n-2; j>=0; j--){
        if((vec[j]>0 && vec[j+1]<0) || (vec[j]<0 && vec[j+1]>0))
            arr[j] = arr[j+1]+1;
        else
            arr[j] = 1;
    }
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
	return 0;
}
