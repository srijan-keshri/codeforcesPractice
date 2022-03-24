#include<bits/stdc++.h>
using namespace std;

int main(){
    #define int long long int
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        
        cin >> v[i];
        mp[v[i]] = i+1;
       // cout<<v[i]<<" "<<i<<endl;
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int x = 0, y = 0;
    for (int i = 0; i < b.size(); i++)
    {
        int temp = mp[b[i]];
        //cout<<temp<<" ";
        x += temp;
        y += n - temp + 1;
    }
    cout << x << " " << y;
 
    return 0;
}