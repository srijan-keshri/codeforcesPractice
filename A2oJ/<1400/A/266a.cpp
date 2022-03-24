#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int i = 0;
    int j = 1;
    while (i < n || j < n)
    {
        if(i!=j){
            if(s[i]==s[j] ){
        
            ++ans;
            ++j;
        }
        else{
            i=j;
        }
        }
        else{
            ++j;
        }
    }
    cout << ans;
    return 0;
}