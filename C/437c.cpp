#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<int, int>> rope;
    for (int i = 0; i < n;i++){
        cin >> v[i];
        
    }
    
    for (int i = 0; i < m;i++){
        int a, b;
        cin >> a >> b;
        rope.push_back({a, b});
    }
    int cost = 0;
    for (int i = 0; i < m;i++){
        int a = rope[i].first;
        int b = rope[i].second;
        --a;
        --b;
        int temp = min(v[a], v[b]);
        cost += temp;
    }
    cout << cost;

    return 0;
}