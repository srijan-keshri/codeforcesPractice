#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, int> m;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ++m[temp];
    }
    int ans = 0;
    string aa="";
    for (auto x : m)
    {
        if(x.second>ans){
            ans = x.second;
            aa = x.first;
        }
    }
    cout << aa;
    return 0;
}