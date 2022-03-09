#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first)
    return (a.first > b.first);

    return a.second < b.second;
}
int main(){
    int n,k;
    cin >> n>>k;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int t = 1;
    map<pair<int,int>, vector<int>> mp;
    int flag = 0;
    int ans;
    pair<int,int> temp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]].push_back(t);
      //cout<<v[i].first<<" "<<v[i].second<<endl;
        if(t==k){
            

            flag = 1;
            temp = v[i];
            //cout<<ans<<endl;
            
            
        }
        

            //if ans is in the vector then find it
        
     //cout<<t<<endl;
        ++t;
    }
    //cout<<temp.first<<" "<<temp.second<<endl;
    //cout<<mp[temp].size()<<endl;
    ans=mp[temp].size();
    if(flag){
        cout << ans;
    }
    else{
        cout << "-1";
    }
}