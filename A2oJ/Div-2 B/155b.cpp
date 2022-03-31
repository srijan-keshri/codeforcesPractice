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
// int cmp(pair<int,int> p1,pair<int,int> p2){
//     if(p2.second!=p1.second)
//         return p2.second < p1.second;

//     return p1.first > p2.second;
// }
void solve(){
    int n;
        cin >> n;
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n;i++){
            int a, b;
            cin >> a >> b;
            v[i]={a,b};
        }
        sort(all(v));
        //print1(v);
        int c = 1;
        int i = 0;
        int score = 0;
        for (int i = 0; i <n ;i++){
            int a = v[i].F;
            int b = v[i].S;
            if(b>0){
                score += a;
                v[i].F = 0;
                c+=b;
                v[i].S = 0;
                --c;
                //cout << score <<" "<<c<< endl;
            }
        }
        //cout<<endl;
        for (int i = n - 1; i >= 0;i--){
            int a = v[i].F;
            int b = v[i].S;
            if(a>0 && c>0){
                score += a;
                --c;
            //cout << score <<" "<<c<< endl;

            }
        }
            cout << score << endl;
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