#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int 
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n>>a>>b;
        string s;
        cin >> s;
        if( b>=0){
            cout << a * n + b * n << endl;
        }
        else{
            int count = 1;
            int prev = s[0];
            for (int i = 1; i < n;i++){
                if(prev==s[i]){

                }
                else{
                    ++count;
                }
            }
            int ans = (a * n) + b * (count / 2) + b;
            cout << ans << endl;
        }
    }
    return 0;
}