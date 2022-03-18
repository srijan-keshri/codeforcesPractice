#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mm = v[0];
    int mx = v[0];
    int ans = 0;
    for (int i = 1; i < n;i++){
        if(v[i]<mm){
            mm = v[i];
            ++ans;
            
        }
        if(v[i]>mx){
            mx = v[i];
            ++ans;
        }
    }
    cout << ans;
    
}