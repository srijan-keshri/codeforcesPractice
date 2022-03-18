#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if(i+2<n && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            i=i+2;

        }
        else if(i+1<n && s[i]=='1' && s[i+1]=='4'){
++i;
        }
        else if(s[i]=='1'){

        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

        return 0;
}