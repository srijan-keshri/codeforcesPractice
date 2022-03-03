#include<bits/stdc++.h>
using namespace std;

int main(){
    #define int long long int

    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int ans = 0;
    if(n>=sum){
        
        for (int i = 0; i < m; i++)
        {
            int temp = (v[i] * (v[i] + 1)) / 2;
            ans += temp;
            
        }
        cout << ans << " " << ans;

    }
    else{
        int ans1 = 0, ans2 = 0;
        int temp = n;
       
        int mi;
        vector<int> v2=v;
        while (temp > 0)
        {
             int mx = INT_MIN;

            for (int i = 0; i < m;i++){
                if(v[i]>mx){
                    mx = v[i];
                    mi = i;
                }
            }
            ans1 += mx;
            v[mi] = v[mi] - 1;
            --temp;
        }
        temp = n;
        
        int mni;
        while (temp > 0)

        {
            //cout<<temp;
            int mn = INT_MAX;
            for (int i = 0; i < m;i++){
                if(v2[i]<mn && v2[i]>0){
                    mn = v2[i];
                    mni = i;
                }
            }
            //cout<<mn<<endl;
            ans2 += mn;
            v2[mni] = v2[mni] - 1;
            --temp;
        }
        cout << ans1 << " " << ans2;
    }

}