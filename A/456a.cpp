#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n);

    for (int i = 0; i < n;i++){
        int a, b;
        cin >> a >> b;
        v[i].push_back(a);
        v[i].push_back(b);
    }
    sort(v.begin(), v.end());
    int mf = v[0][1];
     int flag = 0;
     //cerr<<"HII";
    for (int i = 1; i < n; i++)
    {
        if(mf>v[i][1]){
            flag = 1;
            break;
        }
        else{
            mf = v[i][1];
        }
    }
    if(flag){
        cout << "Happy Alex";
    }
    else{
        cout << "Poor Alex";
    }
}