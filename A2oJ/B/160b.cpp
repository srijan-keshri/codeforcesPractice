#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v1, v2;
    for (int i = 0; i < n;i++){
        v1.push_back(s[i]);
        v2.push_back(s[n + i]);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int flag = 1;
    if (v1[0] > v2[0])
    {

        for (int i = 0; i < n;i++){
           if( v1[i]>v2[i]){

           }
           else{
               flag = 0;
               break;
           }
        }
    }
    else{
for (int i = 0; i < n;i++){
           if( v1[i]<v2[i]){

           }
           else{
               flag = 0;
               break;
           }
        }
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}