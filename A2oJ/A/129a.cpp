#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int ans = 0;
    if (sum % 2 == 0)
    {
        for (int i = 0; i < n;i++){
            if(v[i]%2==0){
                ans++;
            }
        }
    }
    else{
         for (int i = 0; i < n;i++){
            if(v[i]%2==1){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}