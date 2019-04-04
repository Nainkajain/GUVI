#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, max=0, pos=-1;
    cin >> m;

    vector<int> vec(m);
    for( int i=0; i<m; i++ ){
        cin >> vec[i];
        if( max < vec[i] ){
            max = vec[i];
            pos = i;
        }
    }

    stack<int> s;
    s.push(vec[m-1]);
    for(int i=m-2; i>=pos; i--){
        if(s.top() <= vec[i]){
            s.push(vec[i]);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl<<max;
    return 0;
}
