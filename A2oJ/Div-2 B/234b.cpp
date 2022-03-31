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
    int n,k;
        cin >> n>>k;
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n;i++){
            int a, b;
            cin >> a;
            b = i+1;
            v[i] = {a, b};
        }
        sort(all(v));
        int count = 0;
        int aa;
        vector<int> ans;

        for (int i = n - 1; i >= 0; i--)
        {
            if(count<k){
                ans.push_back(v[i].S);
            aa = v[i].F;
            ++count;
            }else{
                break;
            }
                
            
        }
                cout << aa << endl;
                sort(all(ans));
                print(ans);
}
int32_t main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--)
        solve();

    return 0;
}