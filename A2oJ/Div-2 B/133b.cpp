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
int m = 1e6 + 3;
int toDecimal(string s){
    int prev=1;
    reverse(s.begin(), s.end());
    int ans = 0;
    for (int i = 0; i < s.length();i++){
        if(i==0){

        }
        else {
            prev=2*prev;
            prev=prev%m;
        }
        if(s[i]=='1'){
            
            
            ans += prev;
            ans = ans % m;
        }
    }
    return ans;
}
void solve()
{
    string s;
    cin >> s;
    string ans = "";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='>'){
            ans += "1000";
        }
        else if(s[i]=='<'){
            ans += "1001";
        }
        else if(s[i]=='+'){
            ans += "1010";
        }else if(s[i]=='-'){
            ans += "1011";
        }
        else if (s[i] == '.')
        {
            ans += "1100";
        }else if(s[i]==','){
            ans += "1101";
        }
        else if (s[i] == '[')
        {
            ans += "1110";
        }else if(s[i]==']'){
            ans += "1111";
        }
        //cout<<i<<endl;
    }
    int c = toDecimal(ans);
    //cout << ans << endl;
    cout << c << endl;
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