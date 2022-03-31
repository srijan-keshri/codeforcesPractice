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
    map<pair<int, int>, int > mp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }
    vector<int> index;
    sort(v.begin(), v.end());
    //print1(v);
    for(int i=0;i<n-1;i++){
        if(v[i].S<=v[i+1].S){

        }
        else{
            if(i==n-2){
                index.push_back(i+1);
            }
            index.push_back(i);
            

            // cout<<"HII"<<endl;
        }
    }
    if(index.size()==0){
        int ans=0;
        for(int i=0;i<v.size();i++){
            ans=max(ans,v[i].S);

        }
        cout<<ans<<endl;

    }else {
        int ans=0;
        int xx=0;
        for(int i=0;i<index.size();i++){
            ans=max(ans,v[i].F);
        }
        // for(int i=n-1;i>=0;i--){
        //     xx=max(xx,v[i].S);
        // }
        cout<<ans<<endl;
        // cout<<xx<<endl;
        // ans=max(ans,xx);
            // cout<<ans<<endl;

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