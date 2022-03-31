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
    int n,sumTime;
        cin >> n>>sumTime;
        vector<pair<int,int>> v(n);
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v[i]={a,b};
            sum1 += a;
            sum2 += b;
        }
        vector<int> ans(n,0);
        
        int sum = 0;
        int flag = 1;


        for (int i = 0; i < n; i++)
        {
            int a = v[i].F;
            int b = v[i].S;
            
            sum += a;
            if(sum>sumTime){
                flag = 0;
                break;
            }
            ans[i] += a;
            v[i].F = 0;
            v[i].S = b - a;
            }
            int i;
            for (i = 0; i < n; i++)
            {
                int a = v[i].F;
                int b = v[i].S;
                if(sumTime>sum){
                    if(sum+b>sumTime){
                        ans[i] += sumTime - sum;
                        sum = sumTime;
                        break;
                    }
                    else
                    {
                        ans[i] += b;
                        sum += b;
                    }
                }
            }
            if(i==n && sum<sumTime ){
                cout << "NO" << endl;
                return;
            }
            else if(flag==0){
                 cout << "NO" << endl;
                return;
            }

                cout << "YES" << endl;
                print(ans);
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