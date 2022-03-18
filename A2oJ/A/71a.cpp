#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    for (int i = 0; i < n;i++){
        int temp = v[i].length();
        if(temp>10){
            char a = v[i][0];
            char b = v[i][temp - 1];
            string ss = "";
            ss += a;
            ss += to_string(temp - 2);
            ss += b;
            v[i] = ss;
        }
    }
    for (int i = 0; i < n;i++){
        cout << v[i] << endl;
    }
        return 0;
}