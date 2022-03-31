
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
        int n = v.size();
        // print(v);
        int sum = 0;
        sort(v.begin(), v.end());

        // 4-2+1
        int i;
        int ff = 0;
        for (i = 0; i < n; i++)
        {
            if (v[i] > l)
            {
                sum += (v[i] * (v[i] - l + 1));
                break;
            }
            cout << i << endl;
        }
        cout << sum << endl;
        for (i; i < v.size(); i++)
        {

            if(ff)
                break;
            else if (v[i] > r && ff == 0)
            {
                ff = 1;
                sum += (v[i] * (v[i] - v[i - 1]));
                break;
            }
            else
            {
                sum += v[i] * (v[i] - v[i - 1]);
                
            }
        }
        cout << sum << endl;
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