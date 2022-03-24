#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n, k;
    cin >> n >> k;
    int ans;
    if (2 * k > n)
    {
        int temp;

        if(n%2==0){
            temp = 2 * k - n;
        }
        else{
            temp = 2 * k - n - 1;
        }
        ans = temp ;
    }
    else{
        ans = 2 * k - 1;
    }
    cout << ans;

    return 0;
}