#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp1,mp2;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]==i){
            ++count;
        }
        else{
        mp1[v[i]] = i;
        mp2[i] = v[i];
        }
       
    }
    // 0 1 3 2
    // 0 1 2 3
    for(auto x:mp1){
        int a = x.first;
        int b = x.second;
        /// 3
        /// 2
        int c = mp2[a];
        if(c==b && mp2[c]==a){
            cout << count + 2 << endl;
            return 0;
        }
    }
    if(mp1.size()>0){
            cout << count + 1 << endl;

    }
    else{
        cout<<count<<endl;
    }

    return 0;
}