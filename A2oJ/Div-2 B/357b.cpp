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
    map<int, int> mp;
        for (int i = 1; i <= n;i++){
            mp[i] = -1;
        }

        vector<int> ans(n + 1, -1);
        vector<vector<int>> v;
        for (int i = 0; i < m;i++){
            vector<int> ttt;
            for (int j = 0; j < 3; j++)
            {
                int xxx;
                cin >> xxx;
                ttt.push_back(xxx);
            }
            v.push_back(ttt);
        }
            for (int i = 0; i < m; i++)
            {
               
                vector<int> temp;
                for (int j = 0; j < 3; j++)
                {
                    int tt;
                      
                     temp.push_back(v[i][j]);

                    if (mp[v[i][j]] != -1)
                    {

                        int t = mp[v[i][j]];
                        
                    }
                }

                
                    int x = mp[temp[0]];
                    int y = mp[temp[1]];
                    int z = mp[temp[2]];
                    if(x==-1 && y==-1 && z==-1){
                        mp[temp[0]] = 1;
                        mp[temp[1]] = 2;
                        mp[temp[2]] = 3;
                    }else if(x==-1 && y==-1){
                        int p, q;
                        if (z == 1)
                        {
                            p = 2;
                            q = 3;
                        }
                        else if (z == 2)
                        {
                            p = 3;
                            q = 1;
                        }
                        else
                        {
                            p = 1;
                            q = 2;
                        }
                        mp[temp[0]]=p;
                        mp[temp[1]]=q;
                    }
                    else if(y==-1 && z==-1){
                    int p, q;
                    if ( x== 1){
                        p = 2;
                        q = 3;
                    }else if(x==2){
                        p = 3;
                        q = 1;
                    }else {
                        p = 1;
                        q = 2;
                    }
                    mp[temp[1]]=p;
                    mp[temp[2]]=q;
                    }
                    else if(x==-1 && z==-1){
                    int p, q;
                    if ( y== 1){
                        p = 2;
                        q = 3;
                    }else if(y==2){
                        p = 3;
                        q = 1;
                    }else {
                        p = 1;
                        q = 2;
                    }
                    mp[temp[0]]=p;
                    mp[temp[2]]=q;
                    }
                    else if(x==-1){
                    int var = 6 - y - z;
                    mp[temp[0]] = var;
                    }else if(y==-1){
                    int var = 6 - y - z;
                    mp[temp[1]] = var;
                    }
                    else if(z==-1){
                    int var = 6 - y - z;
                    mp[temp[2]] = var;
                    }
        }


        for (auto x : mp)
        {
            int xx = x.first;
            int yy = x.second;
            // cout << xx << " " << yy << endl;
            ans[xx] = yy;
        }
        // for (int i = 0; i < m;i++){
        //     vector<int> temp = v[i];
        //     print(temp);
            
        // }
            for(int i=1;i<ans.size();i++){
                cout<<ans[i]<<" ";
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