#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    if(n<=2){
        cout << n << endl;
        return 0;
    }
    int length = 0;
    int ans = 0;
    // for (int i = 2; i < n;i++){
    //     if(v[i-1]+v[i-2]==v[i]){
    //         ++length;
    //     }
    //     else{
    //         if(length>0){
    //             --length;
    //         }
    //         else{
    //             length = 0;
    //         }
    //     }
    //     ans = max(ans, length);
    // }
    length = 0;
    for (int i = 0; i < n - 2;i++){
        if(v[i]+v[i+1]==v[i+2]){
            ++length;
        }
        else{
            length = 0;
        }
        ans = max(ans, length);
    }
        cout << ans+2 << endl;

    return 0;
}