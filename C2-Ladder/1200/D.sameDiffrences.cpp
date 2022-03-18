#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        map<int,int> mp;
        for (int i = 0; i < n;i++){
            cin >> v[i];
            ++mp[v[i]-i];
        }
        int count = 0;
        for(auto x:mp){
            if(x.second>1){
                count+=(x.second)*(x.second-1)/2;
            }
        }
        cout << count << endl;
    }

    return 0;
}