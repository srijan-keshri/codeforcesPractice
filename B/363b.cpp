#include<bits/stdc++.h>
using namespace std;
int main(){
   // #define int long long int
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    if(n==k){
        cout << "1";
        return 0;
    }
    int finalCost = INT_MAX;
    int j=n-1;
    int dp[n-k+1];
    int index;
    memset(dp,0,sizeof(dp));
    int i;
    for( i=n-1;i>n-k-1;i--){
        dp[n-k]+=v[i];
    }
    //cout<<dp[n-k];
    for(;i>=0;i--){
        dp[i]=dp[i+1]-v[j]+v[i];
        --j;
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    for( i=0;i<n-k+1;i++){
        if(dp[i]<finalCost){
            index=i;
            finalCost=dp[i];
        }
    }
    cout << index+1;
    }