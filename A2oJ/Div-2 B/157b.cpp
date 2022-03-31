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
        sort(v.begin(), v.end());
        int flag = 1;
        float ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if(flag==1){
                ans =ans+(v[i] * v[i]);
                flag = 0;
            }
            else if(flag==0){
                ans=ans-(v[i] * v[i]);
                flag = 1;
            }
            //cout<<ans<<endl;
        }
        double pi = 2*acos(0.0);
        cout << ans*pi << endl;
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