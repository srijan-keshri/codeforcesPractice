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
vector<int> divisor(int n){
    vector<int> v;
    int temp=n;
    for (int i = 2; i <= temp; i++)
    {
        if(n%i==0){
            while(n%i==0){
                v.push_back(n);
                n = n / i;

            }
            

        }
    }
    return v;
}
void solve(){
    int n;
        cin >> n;
        vector<int> ans = divisor(n);
        ans.push_back(1);
        print(ans);
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