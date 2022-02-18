#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a;
    cin>>b;
    // cout<<a<<endl;
    // cout<<b<<endl;
   
    string ans;
    ans="";
    
    for (int i = 0; i < a.length(); i++)
    {
        if(a[i]!=b[i]){
            ans.push_back('1');
        }
        else{
            ans.push_back('0');
        }
    }
    
    cout << ans;
    return 0;
}