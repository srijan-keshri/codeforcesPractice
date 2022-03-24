#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int step = n / 2;
    vector<vector<int> > v(n);
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < step;j++){
            v[i].push_back(k);
            ++k;
        }
    }
    for (int i = n - 1; i >= 0;i--){
        for (int j = 0; j < step;j++){
            v[i].push_back(k);
            ++k;
            
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

        return 0;
}