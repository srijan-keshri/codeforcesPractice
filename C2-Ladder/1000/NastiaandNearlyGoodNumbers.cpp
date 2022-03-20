#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int 
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(b==1){
            cout << "NO" << endl;
            continue;
        }
        int first = a * (b - 1);
        int second = a * b;
        int third = first+second;
        cout<<"YES"<<endl;
        cout << first << " " << second << " " << third << endl;
    }
    return 0;
}