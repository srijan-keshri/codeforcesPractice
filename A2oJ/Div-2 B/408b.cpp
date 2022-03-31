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
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> mp1, mp2;
    for (int i = 0; i < s1.length(); i++)
    {
        ++mp1[s1[i]];

    }
    int ans = 0;
    int flag = 1;
    for (int i = 0; i < s2.length(); i++)
    {
        //cout << mp1[s2[i]] << endl;
        if (mp1[s2[i]] > 0)
        {
            ++mp2[s2[i]];
        }
        else
        {
            flag = 0;
            break;
        }
    }
    for(auto x:mp2){
        char c = x.first;
        int count = x.second;
        int temp = mp1[c];
        if(temp>count){
            ans += count;
        }else{
            ans += temp;
        }
    }
    if(flag==0){
        cout << "-1" << endl;
    }
    else{
        cout << ans << endl;
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