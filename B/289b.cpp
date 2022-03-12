#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,d;
    cin >> n>>m>>d;
    vector<vector<int>> v(n,vector<int>(m));
    int a, b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m;j++){
            cin >> v[i][j];
        }
    }
    int flag = 1;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int temp = v[i][0];
        b = temp - v[0][0];
        b = b % d;
        if(b!=0){
            flag = 0;
            break;
        }
        for (int j = 0; j < m; j++)
        {
            mx = max(mx, v[i][j]);
            a = (v[i][j] - temp) % d;
            if(a!=0){
                flag = 0;
                break;
            }
        }
        if(!flag){
            break;
        }
    }
    
        if (!flag)
        {
            cout << "-1";
            return 0;
        }

        int count = 0;
        vector<int> vp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m;j++){
                vp.push_back(v[i][j]);
            }
        }
        sort(vp.begin(), vp.end());
        int median;
        if(vp.size()%2==0){
            int ans1=0, ans2 = 0;
            for (int i = 0; i < vp.size();i++){
                int median1 = vp.size() / 2;
                int median2 = median1 - 1;

                ans1 += abs(vp[i] - vp[median1]) / d;
                ans2+=abs(vp[i] - vp[median2]) / d;
            }
            count = min(ans1, ans2);
        }
        else{
            median = vp.size() / 2;
           // ++median;
            for (int i = 0; i < vp.size();i++){
                count += abs(vp[i] - vp[median])/d;
            }
        }
        cout << count;
}