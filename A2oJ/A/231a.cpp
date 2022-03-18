#include<bits/stdc++.h>
using namespace std;

const int N=0;
int main(){
    int n;
    int ans = 0;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(3));
    for (int i = 0; i < n;i++){
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
            sum += v[i][j];
        }
        if(sum>1){
            ++ans;
        }
    }
    cout << ans;
}