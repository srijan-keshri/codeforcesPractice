#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a, b;
    vector<pair<int, int> > v(n);
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[i]={a, b};
    }
    for (int i = 0; i < n;i++){
        a = v[i].first;
        b = v[i].second;
        if(b<k){
            ans = max(ans, a);
        }
        else
        {
            int z = a - (b - k);
            ans = max(ans, z);
        }
    }
    cout << ans;
    return 0;
}