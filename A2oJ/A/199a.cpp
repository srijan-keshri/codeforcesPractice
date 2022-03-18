#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
   
    if(n==0){
        cout << "0"
             << " "
             << "0" << " "
             << "0";
        exit(0);
    }
    
    else if(n==1){
cout << "0"
             << " "
             << "1" << " "
             << "0";
        exit(0);
    }
    else if(n==2){
        cout << "0"
             << " "
             << "1" << " "
             << "1";
        exit(0);

    }
    int a = 0, b = 0, c = 0,d=0,e=1;
    while(e!=n && e<n){
        
        a = b;
        int temp = d + e;
        b = c;
        c = d;
        d=e;
        e=temp;
        // cout << a << " " << b << " " << c <<" "<<d <<" "<<e<< endl;
    }
    cout<<a<<" "<<b<<" "<<n-a-b;
    

    return 0;
}