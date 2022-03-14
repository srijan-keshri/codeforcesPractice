#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int even = 0;
        int odd = 0;
        vector<int> v(2 * n);
               

        for (int i = 0; i < 2 * n;i++){
            cin >> v[i];
            if(v[i]%2==0){
                ++even;
            }
            else{
                ++odd;
            }
        }
        if( even==n){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}