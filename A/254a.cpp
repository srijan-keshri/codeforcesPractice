#include<bits/stdc++.h>
using namespace std;
 
const int N=0;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v(2*n);
    map<int, vector<int>> mp;
    for (int i = 0; i < 2*n; i++)
    {
        cin >> v[i];
        mp[v[i]].push_back(i + 1);
    }
    for(auto x:mp){
        auto b = x.second;
        if(b.size()%2!=0){
            cout << "-1";
            return 0;
        }

    }
    for(auto  x:mp){

        auto b = x.second;
        for (int i = 1; i < b.size();i+=2){
            cout << b[i-1] << " " << b[i] << endl;
        }
    }
    return 0;
}