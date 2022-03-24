#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int 
    int t=1;
    // cin >> t;
    while(t--){
        string s;
        int k;
        cin >> s;
        cin >> k;
        map<int, int> mp;
        int mx = 0;
        for (int i = 0; i < 26; i++)
        {
            int temp;
            cin>>temp;
            mp[i] = temp;
            mx = max(mx, temp);
        }
        int ans = 0;
        int i;
        for (i = 0; i < s.length(); i++)
        {
            ans += mp[s[i] - 'a']*(i+1);
        }
        // cout<<ans<<endl;
        while(k>0){
            ans += mx * (i + 1);
            ++i;
            --k;
        }
        cout << ans << endl;
    }
    return 0;
}