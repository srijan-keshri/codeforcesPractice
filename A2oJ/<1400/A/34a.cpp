#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int ans = INT_MAX;
    int a, b;
    for (int i = 0; i < n-1; i++)
    {
        int temp = abs(v[i] - v[i + 1]);
        if(temp<ans){
            ans = temp;
            a = i;
            b = i+1;
        }
    }
    int temp = abs(v[n-1] - v[0]);
        if(temp<ans){
            ans = temp;
            a = n-1;
            b = 0;
        }

    //cout << ans << endl;
    cout << a + 1 << " " << b + 1 << endl;

    return 0;
}