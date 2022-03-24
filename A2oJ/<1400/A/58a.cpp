#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    string s;
    cin >> s;
    int a=0, b=0, c=0, d=0;
    for (int i = 0; i < s.length();i++){
        if(s[i]=='h'){
            a++;
        }
         else if(a>0 && s[i]=='e'){
            ++b;
        }
        else if(b>0 && s[i]=='l'){
            ++c;
        }
        else if(c>1 && s[i]=='o'){
            ++d;
        }
    }
    if(d>0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}