#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.length();i++){
        ++mp[s[i]];
    }

    for(auto x:mp){
        if(x.second%k!=0){
            cout << "-1";
            exit(0);
        }
    }
    string pattern = "";
    for(auto x:mp){
        int temp = x.second / k;
        for (int i = 0; i < temp;i++){
            pattern += x.first;
        }

    }
    string ans = "";
    for (int i = 0; i < k; i++)
    {
        ans += pattern;
    }
    cout << ans;
}
