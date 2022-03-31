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
int calculateShots(vector<pair<int,int>> v,int x,int y,int n){
    set<double> s;
    for (int i = 0; i < n; i++)
    {
        int a = v[i].F;
        int b = v[i].S;
        if(x==a){
            s.insert(1e9);
        }
        else{
            double slope = (b - y) ;
            slope=slope/ (a - x);
            // cout<<slope<<endl;
            s.insert(slope);
        }

        
    }
    return s.size();
}
void solve(){
    int n,x,y;
        cin >>n>>x>>y;
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n;i++){
            int a, b;
            cin >> a >> b;
            v[i] = {a, b};
        }
        int ans = calculateShots(v, x, y, n);
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