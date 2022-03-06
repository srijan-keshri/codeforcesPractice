#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char, int>
        mp1, mp2;
    for (int i = 0; i < s1.length();i++){
        if(s1[i]==' '){

        }
        else{
            ++mp1[s1[i]];
        }
    }
    for (int i = 0; i < s2.length();i++){
        if(s2[i]==' '){

        }
        else{
            ++mp2[s2[i]];
        }
    }
    int flag = 1;
    for (auto x : mp2)
    {
        auto a = x.first;
        auto b = x.second;

        //cout<<a<<" "<<b<<" "<<mp1[a]<<endl;
        if(mp1[a]>=b){

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