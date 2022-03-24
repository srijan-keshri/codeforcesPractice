#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length();i++){
        if(s[i]=='7' || s[i]=='4'){
            ++count;
        }
    }
    string temp = to_string(count);
    int flag = 1;
    for (int i = 0; i < temp.size(); i++)
    {
        if(temp[i]=='4'|| temp[i]=='7'){

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
}