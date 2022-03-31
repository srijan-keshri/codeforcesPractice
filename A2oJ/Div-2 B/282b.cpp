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
        for (int i = 0; i < n;i++){
            int a, b;
            cin >> a >> b;
            v[i] = {a, b};
        }
        sort(v.begin(), v.end());
        int i = 0;
        int j = 0;
        
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