#include<bits/stdc++.h>
using namespace std;
int isLucky(string n)
{
    int x = stoi(n);
    for (int i = 0; i < x.length();i++){
        if(x[i]=='4' || x[i]=='7'){

        }
        else{
            return 0;
        }
    }
    return 1;
}
vector<int> generateLucky(){
    
}
int main(){
    string s;
    cin >> s;
    if(isLucky(s)){
        cout << "YES";
        exit(0);
    }
    else{
        int flag = 0;

    }
}