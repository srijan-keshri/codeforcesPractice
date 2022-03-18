#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    map<int, int> mp;
    int n, m;
    cin >> n ;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> m;
    int ans = INT_MIN;
    vector<int> p(m);
    for (int i = 0; i < m;i++){
        cin >> p[i];
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(p[j]%v[i]==0){
                int temp = p[j] / v[i];
                ++mp[temp];
                ans = max(ans, temp);
            }
        }
    }
    cout << mp[ans];
}