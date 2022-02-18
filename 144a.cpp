#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int mm = INT_MAX;
    int mmi;
    int mxi;
    int mx = INT_MIN;
    for (int i = 0; i < n;i++){
        if(v[i]<=mm){
            mm = v[i];
            mmi = i;
        }
        if(v[i]>mx){
            mx = v[i];
            mxi = i;
        }
    }
    int ans;
    if (mxi < mmi)
    {
        ans = mxi + n - mmi-1;
    }
    else{
        ans = mxi +n- mmi-2 ;
    }
    cout << ans << endl;
    return 0;
}