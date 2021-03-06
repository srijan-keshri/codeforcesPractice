#include<bits/stdc++.h>
using namespace std;


#define int             long long int 
#define F               first
#define S               second
#define pb              push_back
#define double          long double
#define print(a)        for(auto x:a)cout<<x<<" "; cout<<endl
#define print1(a)       for(auto x:a)cout<<x.F<<" "<<x.S<<endl
#define all(p)          p.begin(),p.end()
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int m;
    cin >> m;
    vector<int> dp(n);
    dp[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i - 1], v[i]);
    }
        for (int i = 0; i < m; i++)
        {
            int w, h;
            cin >> w >> h;
            --w;
            int ans = max(dp[0], dp[w]);
            if(w!=0){
            dp[w] = ans + h;
            dp[0] = ans + h;
            }else{
                dp[0] += h;
            }

            cout << ans << endl;
        }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--)
        solve();

    return 0;
}