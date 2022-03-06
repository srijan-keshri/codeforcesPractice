#include<bits/stdc++.h>
using namespace std;
int isLucky(string n)
{
   // int x = stoi(n);
    for (int i = 0; i < n.length();i++){
        if(n[i]=='4' || n[i]=='7'){

        }
        else{
            return 0;
        }
    }
    return 1;
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
        int n = stoi(s);

        for (int i = 1; i  <= n; i++)
        {
           
            if(n%i==0){
                 cout<<i<<" ";
                flag=isLucky(to_string(i));
            if(flag){
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
    return 0;
}