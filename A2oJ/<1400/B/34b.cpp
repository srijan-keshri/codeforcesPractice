#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]<0 && count<m){
            ans -= v[i];
            ++count;
        }
    }
    cout << ans;
    return 0;
}