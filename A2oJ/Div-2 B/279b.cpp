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
    int n,t;
        cin >> n>>t;
        vector<int> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }
        int time = 0;
        int count=0;
        int i = 0,j=0;
        int k = 0;
        for (j = 0; j < n; j++)
         {   
             //cout<<time<<" "<<k<<endl;

            time += v[j];
            ++k;
            if(time<=t){
                
                count = max(count, k);

            }
            else{

                while(time>t){
                   // cout<<time<<" "<<i<<endl;
                    //cout<<i<<endl;
                    time -= v[i];
                    ++i;
                    --k;
                }
                
            }
        }
        cout << count << endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
   // cin >> t;
    while(t--)
        solve();

    return 0;
}