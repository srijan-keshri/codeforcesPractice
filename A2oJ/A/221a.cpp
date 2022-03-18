#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==1){
        cout << "1";
    }
    else if(n==2){
        cout << "2 1";
    }
    else if(n==3){
        cout << "3 1 2";
    }
    else{
        string ans = "";
        ans += to_string(n);
        
        for (int i = 1; i < n; i++)
        {
            ans += " ";
            ans += to_string(i);
        
        }
        cout << ans;
    }
    return 0;
}