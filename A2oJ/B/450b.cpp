#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    int m = 1000000007;
    int n;
    cin >> x >> y;
    cin >> n;
    x+=m;
    y+=m;
    x=x%m;
    y=y%m;
    int temp=y-x+m;
    temp=temp%m;
    int temp2=(temp*-1+m)%m;
     n=n%6;
     if(n==1){
        cout<<x;
     }
     else if(n==2){
        cout<<y;
     }
     else if(n==3){
        cout<<temp;
     }
     else if(n==4){
        cout<<(x*-1+m)%m;
     }
     else if(n==5){
                cout<<(y*-1+m)%m;

     }
     else{
        cout<<temp2;
     }

    return 0;
}