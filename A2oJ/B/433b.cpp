#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
      //  cout<<v[i]<<" ";
    }
    int m;
    cin >> m;
    
    vector<vector<int>> p(m);
    for (int i = 0; i < m;i++){
        int a, b, c;
        cin >> a >> b >> c;
        p[i].push_back(a);
        p[i].push_back(b);
                p[i].push_back(c);



    }
    int dp1[n +2];
    memset(dp1, 0, sizeof(dp1));
    dp1[1] = v[0];
    //cout<<dp1[0];
    for (int i = 2; i < n+1; i++)
    {
        dp1[i] =v[i-1]+ dp1[i - 1];
        //cout<<dp1[i]<<" ";
    }
    sort(v.begin(), v.end());
    int dp2[n + 2];
    memset(dp2, 0, sizeof(dp2));
    dp2[1] = v[0];
    for (int i = 2; i < n+1; i++)
    {
        dp2[i] =v[i-1]+ dp2[i - 1];
    }
    for (int i = 0; i < m;i++){
       
        int a = p[i][0];
        int b = p[i][1];
        int c = p[i][2];
         // cout<<a<<" "<<b<<" "<<c<<" " ;
        if(a==1){
                //cerr<<"I am herre";
            // cout<<dp1[c-1]<<endl;

            cout << dp1[c ] - dp1[b - 1] << endl;
        }
        else{
            cout << dp2[c ] - dp2[b - 1] << endl;
        }
    }

}