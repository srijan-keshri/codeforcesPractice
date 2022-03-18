#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n),b(n);
    int sum=0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]==1){
            b[i] = -1;
        }
        else{
            b[i] = 1;
        }
        sum+=v[i];
    }
    // if(n==1){
    //     if(v[0]==1){
    //         cout<<"0";
    //     }
    //     else{
    //         cout<<"1";
    //     }
    //     return 0;
    // }
    int dp[n];
    memset(dp, 0, sizeof(dp));
    dp[0] = b[0];
    int ans = dp[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i - 1] + b[i], b[i]);
        ans = max(ans, dp[i]);
    }
    cout << ans+sum << endl;

    return 0;
}