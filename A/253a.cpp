#include<bits/stdc++.h>
using namespace std;
 
const int N=0;

int main(){
     // freopen("input.txt", "r", stdin);
     // freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    int girl = 0, boy = 0;
    int flag ;
    if(m>n){
        flag=1;
    }
    else{
        flag=0;
    }
    for (int i = 0; i < n + m;i++){
        if(flag==0 && boy<n){
            cout << 'B';
            ++boy;
            flag = 1;
        }
        else if(flag==1 && girl<m){
            cout << 'G';
            ++girl;
            flag = 0;
        }
    }
    while(girl<m){
         cout << 'G';
            ++girl;
    }
    while(boy<n){
         cout << 'B';
            ++boy;
    }

}