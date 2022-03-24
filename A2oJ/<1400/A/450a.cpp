#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin >> n >> m;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    while(v.size()>1){
        vector<pair<int, int>> temp;
        int flag = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i].first>m){
                flag = 1;
                temp.push_back({v[i].first - m, v[i].second});
            }
        }
        if(flag==0){
            cout << v[v.size() - 1].second+1;
            exit(0);
        }
        v.clear();
        v = temp;

    }
    cout << v[0].second+1;

    return 0;
}