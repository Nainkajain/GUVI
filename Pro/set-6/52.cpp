#include<bits/stdc++.h>
using namespace std;

int distanceSquare(int p1, int y1, int p2, int y2){
    return ((p1-p2)*(p1-p2)) + ((y1-y2)*(y1-y2));
}

int main(){
    int p1,p2,x3,x4;
    int y1,y2,y3,y4;
    cin>>p1>>y1;
    cin>>p2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;

    int l1 = distanceSquare(p1, y1, p2, y2);
    int l2 = distanceSquare(p1, y1, x4, y4);
    int l3 = distanceSquare(x3, y3, x4, y4);
    int l4 = distanceSquare(x3, y3, p2, y2);
    int d1 = distanceSquare(p1, y1, x3, y3);
    int d2 = distanceSquare(p2, y2, x4, y4);

    if(l1==l2 && l2==l3 && l3==l4 && d1==2*l1 && d2==2*l1)
        cout<<"yes";
    else
        cout<<"no";
}
