#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n, k;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ++mp[v[i]];
        ans = max(ans, mp[v[i]]);
    }
    if(2*ans>n+1){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}