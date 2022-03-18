#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n, m;
    cin >> n >> m;
    int t = max(n, m);
    int count = 0;
    for (int i = 0; i <= t; i++){
        int b = n - i * i;
        if(b>=0){
            int temp = i + b * b;
            if(temp==m){
                ++count;
            }
        }
    }
    cout << count;
    return 0;
}