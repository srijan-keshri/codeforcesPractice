#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y;
    cin >> n >> x >> y;
    float no = (n * y) ;
    no = no / 100;
    no = ceil(no);
    int ans = (no - x);
    if(ans>=0){
        cout << ans;
    }
    else{
        cout << "0";
    }

    return 0;
}