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
vector<int> calc(int x){
    vector<int> v;
    int count = 0;
    while (x % 2 == 0)
    {
        x = x / 2;
        ++count;
    }
    v.push_back(count);
    count = 0;
    while (x % 3 == 0)
    {
        x = x / 3;
        ++count;
    }
    v.push_back(count);
    count = 0;
    while(x%5==0){
        x = x / 5;
        ++count;
    }
    v.push_back(count);
    count = 0;
    return v;
}
int cc(int x){
    vector<int> v;
    int count = 0;
    while (x % 2 == 0)
    {
        x = x / 2;
        ++count;
    }
    v.push_back(count);
    count = 0;
    while (x % 3 == 0)
    {
        x = x / 3;
        ++count;
    }
    v.push_back(count);
    count = 0;
    while(x%5==0){
        x = x / 5;
        ++count;
    }
    return x;
}
int check(int gcd){
    if(gcd==1)
        return 1;
    if (gcd % 2 == 0 || gcd % 3 == 0 || gcd % 5 == 0)
    {
        return 1;
    }
    return 0;
}
void solve(){
    int a, b;
    cin >> a >> b;
    if(a==b){
        cout << "0" << endl;
        return;
    }
    int x=a;
    int y=b;
    vector<int> v1 = calc(a);
    vector<int> v2 = calc(b);
    int count = 0;
    x = cc(x);
    y = cc(y);
    for (int i = 0; i < 3; i++)
    {
        count += abs(v2[i] - v1[i]);
    }
    //cout << x<< " " << y << endl;
    if (x == y)
    {
        cout << count;
        }
        else{
           // cout << count;
        cout << "-1" << endl;
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