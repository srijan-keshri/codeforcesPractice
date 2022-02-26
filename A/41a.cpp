#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int n = s1.length();
    int j = n - 1;
    int flag = 0;
    if(s1.length()!=s2.length()){
        flag = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if(s1[i]==s2[j]){
            --j;
        }
        else{
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    return 0;
}