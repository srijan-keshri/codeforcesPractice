#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v(5, vector<int>(5));
    for (int i = 0; i < 5;i++){
        for (int j = 0; j < 5;j++){
            cin >> v[i][j];
        }
    }
    int a, b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5;j++){
            if(v[i][j]==1){
                a = i;
                b = j;
            }
        }

    }
    int ans = abs(a - 2) + abs(b - 2);
    cout << ans;
    return 0;
}