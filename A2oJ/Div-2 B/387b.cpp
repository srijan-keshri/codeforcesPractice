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
    int n,m;
        cin >> n>>m;
        vector<int> v1(n),v2(m);
        for (int i = 0; i < n;i++){
            cin >> v1[i];
        }
        multiset<int> s;
        for (int i = 0; i < m; i++)
        {
            cin >> v2[i];
            s.insert(v2[i]);
        }

        
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            auto x = s.lower_bound(v1[i]);
            if (x != s.end())
            {
                s.erase(x);
            }
            else{
                ++ans;
            }
        }
        cout << ans << endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while(t--)
        solve();

    return 0;
}