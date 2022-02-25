#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
        int ans = INT_MIN;
        int temp = 0;

    vector<pair<int, int> > v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i].first >> v[i].second;
        temp = temp - v[i].first;
        temp += v[i].second;
        ans = max(ans, temp);
    }
    cout << ans;
    return 0;
}