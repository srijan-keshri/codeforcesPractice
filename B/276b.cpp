#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string s){
    map<char, int> m;
    for (int i = 0; i < s.length();i++){
        ++m[s[i]];
    }
    int count = 0;
    for (auto x : m)
    {
        if(x.second%2==1){
            ++count;
        }
    }
    if(count ==1 || count ==0)
        return 1;

    return 0;
}
int main(){

    string s;
    cin >> s;
    int count=0;
    sort(s.begin(), s.end());
    int turn = 1;
    map<char, int> mp;
     for (int i = 0; i < s.length();i++){
         ++mp[s[i]];
    }
     for (auto x : mp)
    {
        // cout << x.first << " " << x.second<<endl;
        if(x.second%2==1){
            ++count;
        }
    }
    // while(!isPalindrome(s)){

    // }

    if(count%2==1 || count==0){
        cout << "First";
    }
    else{
        cout << "Second";
    }
}