#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int 
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m;i++){
        cin >> v[i];
    }
    int pos = 1;
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        if(pos>n){
                pos = pos - n;

            }
           // cout<<pos<<" ";
           // cout<<ans<<" ";
        if(pos<=v[i]){
            ans += v[i] - pos;
            pos = v[i];
            
        }
        else{
            
             ans += n + 1 - pos;
            pos = 1;
           
           if(pos<=v[i]){
               ans += v[i] - pos;
               pos = v[i];
            
           }
        }
    }
        cout << ans;
    return 0;
}