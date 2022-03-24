#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n);
    for (int i = 0; i < n;i++){
        int temp;
            cin >> temp;
        for (int j = 0; j < temp;j++){
            int k;
            cin >> k;
            v[i].push_back(k);
        }
    }

        return 0;
}