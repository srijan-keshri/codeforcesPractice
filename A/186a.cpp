#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int c = 0;
    if(s1.length()!=s2.length()){
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < s1.length();i++){
        if(s1[i]!=s2[i]){
            ++c;
        }
    }
    if(c!=2){
        cout << "NO";
        return 0;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for (int i = 0; i < s1.length();i++){
        if(s1[i]!=s2[i]){
            cout << "NO";
        return 0;
        }
    }

    cout << "YES";
}