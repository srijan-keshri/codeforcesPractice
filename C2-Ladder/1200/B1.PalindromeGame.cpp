#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string s){
    string t=s;
    reverse(t.begin(), t.end());
    if(t==s)
        return 1;
    return 0;
}
int main(){
    #define int long long int 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        //
        cin >> s;
        int alice = 0;
        int bob = 0;
        int flag = 1;//alice
        if(s.length()==1){
            if(s[0]==1){
                cout << "ALICE" << endl;
            continue;
            }
            else{
                cout << "BOB" << endl;
                continue;
            }
        }
        for (int i = 0; i < n-1;i++){
            if(s[i]==1   && s[i]==s[i+1]){

            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag){
            cout << "ALICE" << endl;
            continue;
        }
            if (isPalindrome(s))
            {
                cout << "BOB" << endl;
                continue;
            }
            else{
            cout << "ALICE" << endl;
        }
        
    }
    return 0;
}