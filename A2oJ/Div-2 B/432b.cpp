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
        vector<pair<int,int>> v(n);
        map<int, int> home, away;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            ++home[a];
            ++away[b];
            v[i] = {a, b};
        }
        vector<pair<int, int>> ans(n);
        for (int i = 0; i < n;i++){
            int a = v[i].F;
            int b = v[i].S;
            int x = 0, y = 0;
            x += n-1;
            int t1 = home[b];

            // cout << t1 << endl;
            x += t1;
            y += (n-1 - t1);
            ans[i] = {x, y};
        }
        print1(ans);
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