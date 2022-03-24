#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length();i++){
        if(s[i]=='Q' || s[i]=='H' || s[i]=='9'){
            cout << "YES" << endl;
            exit(0);
        }

    }
    cout << "NO" << endl;
    return 0;
}