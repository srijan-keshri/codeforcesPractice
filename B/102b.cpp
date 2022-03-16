#include<bits/stdc++.h>
using namespace std;
string helper(string s){
    int ans=0;
    for (int i = 0; i < s.length(); i++)
    {
        int temp=s[i]-'0';
        ans += temp;
    }
    return to_string(ans);
}
int main(){
#define int long long int
    string s;
    cin >> s;
    int ans = 0;
    int count = 0;
    while(s.length()>1){
        string temp=helper(s);
        ++count;
        s = temp;
    }

    cout << count;
}