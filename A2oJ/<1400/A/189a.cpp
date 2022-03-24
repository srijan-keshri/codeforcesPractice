#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,a,b,c;
    cin >> n>>a>>b>>c;
    vector<int> dp(n + 1, -1);
    vector<int> coins = {a, b, c};
    dp[0] = 0;
    for (int i = 1; i <= n;i++){
        dp[i] = 0;
        for (int j = 0; j < 3;j++){
            if(i-coins[j]>=0 && dp[i-coins[j]]!=-1){
            dp[i] = max(dp[i],dp[i - coins[j]]+1);

            }
        }
        if(dp[i]==0){
            dp[i]=-1;
        }
    }
    // cout<<"It starts here"<<endl;
    // for(int i=0;i<=n;i++){

    //     cout<<dp[i]<<" ";
    // }
            cout << dp[n];

}
   