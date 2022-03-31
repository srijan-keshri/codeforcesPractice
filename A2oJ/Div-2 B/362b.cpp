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
        vector<int> v(m);
        set<int> s;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        int flag = 1;
        if(s.find(1)!=s.end() || s.find(n)!=s.end()){
            flag = 0;
        }
        if(flag==0){
            cout << "NO" << endl;
            return;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < m - 2;i++){
            if(v[i+1]-v[i]==1 && v[i+2]-v[i]==2){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
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