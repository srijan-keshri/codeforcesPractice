#include<bits/stdc++.h>
using namespace std;
 
const int N=0;
// void init_code(){
// 	#ifndef ONLINE_JUDGE
	
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
	
// 	#endif
// }
int main(){
    string s;
    cin >> s;
    int flag = 0;
    int n=s.length();
    int index;
    string ans="";
    int flag2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(flag2){
            ans += s[i];
        }
        else if(flag==0 && s[i]=='1'){
            ans += s[i];
            flag = 1;
        }
        else if(flag==1 && s[i]=='0'){
            flag2 = 1;
            continue;
        }
        else if(flag==1 && i==n-1){
            continue;
        }
        else{
                        ans += s[i];

        }
        
    }
    cout << ans;
}
