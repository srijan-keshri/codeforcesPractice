#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,h;
    cin >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n;i++){
        cin >> h >> m;
        v.push_back({h, m});
        //  cout<<v[i]<<" ";
    }
    if(v.size()==1){
        cout<<"1"<<endl;
        return 0;
    }
    //int prev = -1;
    int flag = 0;
    int count = 1;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int a = v[i].first;
        int b = v[i].second;
        int c = v[i+1].first;
        int d = v[i+1].second;
                ans = max(count, ans);

        if(a==c && b==d){
                   // cout<<count<<" ";

            ++count;
            flag = 1;
        }
        else{
            flag = 0;
            
            count = 1;
        }
                ans = max(count, ans);

    }
    cout << ans;
}