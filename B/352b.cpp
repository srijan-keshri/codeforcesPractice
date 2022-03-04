#include<bits/stdc++.h>
using namespace std;
pair<int,int> isAp(const vector<int> &temp){
    
    int d = temp[1] - temp[0];
    int flag = 1;
    for (int i = 0; i < temp.size() - 1; i++)
    {
        if(temp[i+1]-temp[i]==d){

        }
        else{
            flag = 0;
            break;
        }
    }
    return {flag, d};
}
int main(){
    // #define int long long int
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        mp[v[i]].push_back(i);
    }
    vector<pair<int, int>> ans;
    for (auto x : mp)
    {
        vector<int> temp = x.second;
        if(temp.size()==1){
            ans.push_back({x.first, 0});
        }
        else{
           pair<int,int> tt= isAp(temp);
           if(tt.first){
               ans.push_back({x.first, tt.second});
           }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size();i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}