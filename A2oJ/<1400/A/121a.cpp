
#include<bits/stdc++.h>
using namespace std;
size_t sz = 0;


#define int             long long int 
#define F               first
#define S               second
#define pb              push_back
#define double          long double
#define print(a)        for(auto x:a)cout<<x<<" "; cout<<endl
#define print1(a)       for(auto x:a)cout<<x.F<<" "<<x.S<<endl
#define all(p)          p.begin(),p.end()
void rec(int cur,vector<int> &v){
    if(cur>1e12)
        return;
    if(cur!=0){
        v.push_back(cur);
        //cout << cur << endl;
    }
    rec(cur * 10 + 4, v);
    rec(cur * 10 + 7, v);
}
void solve(){
    int l,r;
    cin >> l >> r;
    vector<int> v;
   
        rec(0,v);
    //print(v);
    int sum = 0;
    sort(v.begin(),v.end());
    for (int i = l; i <= r; i++)
    {
        int temp= *lower_bound(v.begin(), v.end(), i);
        // cout<<temp<<endl;
        sum+=temp;
    }
    cout << sum;
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