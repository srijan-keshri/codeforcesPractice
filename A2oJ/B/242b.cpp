#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin >> n;
    vector<pair<int,int>> v(n);
    int b = INT_MIN;
    int a = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        a = min(a, v[i].first);
        b = max(b, v[i].second);
    }
    int flag = 0;
    for (int i = 0; i < n;i++){
        if(a==v[i].first && b==v[i].second){
            cout << i + 1;
            return 0;
        }
    }
    cout << "-1";
}