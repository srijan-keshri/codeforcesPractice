#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
       
        
        
    }
    for (int i = 0; i < n; i++){
        if (v[i] == 5 || v[i] == 7)
        {
            cout << "-1";
            return 0;
        }
        ++mp[v[i]];
    }

    for(auto x:mp){
       // cout<<x.first<<" "<<x.second<<endl;
    }
    if(mp[1]==(mp[2]+mp[3]) && mp[1]==(mp[4]+mp[6]) && (mp[2]+mp[3])==(mp[4]+mp[6])){
        int x3 = mp[3];
        int x2 = mp[6] - x3;
        int x1 = mp[2] - x2;
        cout<<x3<<" "<<x2<<" "<<x1<<endl;

        if(x1<0 || x2<0 || x3<0){
            cout << -1;
            return 0;
        }
        for (int i = 0; i < x3;i++){
            cout << "1 2 6" << endl;
        }
        for (int i = 0; i < x1;i++){
            cout << "1 2 4" << endl;
        }
        for (int i = 0; i < x2;i++){
            cout << "1 2 6" << endl;
        }
        
    }
    else{

        cout << "-1";
    }
}