#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n>>m;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
      //  cout<<v[i]<<" ";
    }
    map<int, int> mp;
    vector<int> dp(n );
    int count = 0;


    for (int i = n - 1; i >= 0; i--)
    {
    	       // cout<<mp[v[i]]<<" ";

        if(mp[v[i]]==0){
        	//cout<<i<<" ";
        	//cout<<v[i]<<" ";
            ++mp[v[i]];
            ++count;
            dp[i] = count;

        }
        else{
        	//cout<<i<<endl;
            ++mp[v[i]];
            dp[i]=count;
            //cout<<dp[v[i]]<<endl;
        }
    }
        //cerr<<"I am here";

   	//cout<<dp[0]<<endl;
    int temp;
    for (int i = 0; i < m;i++){

        cin >> temp;
       // cout << temp<<" "<<dp[temp-1] << endl;
        cout<<dp[temp-1]<<endl;

    }

    
}