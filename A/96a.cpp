#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    int a = 0,b=0;
    for (int i = 0; i < n; i++){
        if(s[i]=='0'){
            b = 0;
            ++a;
            if(a>6){
                cout << "YES";
                exit(0);
            }
        }
        else{
            a = 0;
            ++b;
            if(b>6){
                cout << "YES";
                exit(0);
            }
        }
    }
    cout << "NO";
}