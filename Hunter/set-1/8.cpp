#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a, temp;
    cin>>a;
    vector<int> vec(a);
    for(int i=0; i<a; i++){
        cin>>vec[i];
    }
    for(int i=0; i<a-2; i++){
        for(int j=i+1; j<a-1; j++){
            for(int k=j+1; k<a; k++){
                if(vec[i]+vec[j]==vec[k])
                    cout<<vec[i]<<" "<<vec[j]<<" "<<vec[k]<<endl;
            }
        }
    }
    return 0;
}
