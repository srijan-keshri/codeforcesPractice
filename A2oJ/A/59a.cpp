#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.length();i++){
        if (islower(s[i])){
            ++a;
        }
        else{
            ++b;
        }
    }
    if(b>a){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << (s);
    }
    else{
                transform(s.begin(), s.end(), s.begin(), ::tolower);

        cout<<(s);
    }

        return 0;
}