#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> no;
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
       // cout<<i<<" ";
        no.push_back(i);
    }
    cout<<endl;
    int ans = 0;
    for (int i = 0; i < n; i++){
       // cout<<v[i]<<" "<<no[i]<<endl;
        ans = ans+abs(no[i] - v[i]);

    }
    cout << ans << endl;
    return 0;
}