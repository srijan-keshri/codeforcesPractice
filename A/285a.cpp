#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int count = 0;
    int i = 1;
    int j = n;
    if(k==n-1){
        for(int i=n;i>=1;i--){
            cout<<i<<" ";
        }
        return 0;
    }
    while(count<k ){
        cout << j << " ";
        --j;
        ++count;
    }

    while(i<=j){
        cout << i << " ";
        ++i;
    }
    return 0;
}