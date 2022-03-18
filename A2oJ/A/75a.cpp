#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    int x = stoi(a);
    int y = stoi(b);
    string z1 = to_string(x+y);
    string z2="";
    for (int i = 0; i < z1.length(); i++)
    {
        if(z1[i]!='0'){
            z2 += z1[i];
        }
    }
    int z = stoi(z2);
    string p = "", q = "";
    for (int i = 0; i < a.length();i++){
        if(a[i]!='0'){
            p += a[i];
        }
    }
    for (int j = 0; j < b.length();j++){
        if(b[j]!='0'){
            q += b[j];
        }
    }
    
    int tt = stoi(p);
    int pp = stoi(q);
    //cout << tt << " " << pp;
    int ans = tt + pp;
    if(ans==z){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}