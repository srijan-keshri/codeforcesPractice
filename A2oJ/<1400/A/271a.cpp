#include<bits/stdc++.h>
using namespace std;
int isDistinct(string temp){
    map<char, int> m;
    for (int i = 0; i < temp.length();i++){
        
        ++m[temp[i]];
        if(m[temp[i]]>1){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin >> n;
    int x = n+1;
    string temp = to_string(x);
    while(isDistinct(temp)!=1){
        x++;
        temp = to_string(x);
    }
    cout << x << endl;

    return 0;
}