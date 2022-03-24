#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(),a.begin(), ::toupper);
    transform(b.begin(), b.end(),b.begin(), ::toupper);
    for (int i = 0; i < a.length();i++){
        if(a[i]==b[i]){

        }
        else if(a[i]>b[i]){
            cout << "1" << endl;
            exit(0);
        }
        else{
            cout << "-1" << endl;
            exit(0);
        }
    }
    cout << "0";

    return 0;
}