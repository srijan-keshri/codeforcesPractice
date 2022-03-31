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
    int n,m,k;
        cin >> n>>m>>k;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ++mp[v[i]-m+1];

        }
        int ans = 0;
        sort(all(v));
        print(v);
        for (int i = n-1; i >= 0;i--){
            if(k<=0)break;
            if(mp[v[i]]>0){
                //cout<<v[i]<<endl;
                int l = v[i];
                int r = l + m - 1;
                int sum2 = (r * (r + 1)) / 2;
                --l;
                int sum1 = (l * (l + 1)) / 2;
                ans += (sum2 - sum1);
                --k;
                --mp[v[i]];
            }
        }
        cout << ans << endl;
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