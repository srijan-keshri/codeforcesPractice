#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m;i++){
        int w, h;
        cin >> w >> h;
        int x = 0;
        for (int i = 0; i < w; i++)
        {
            x = max(x, v[i]);
            
        }
                cout << x << endl;

        for (int i = 0; i < w; i++){
            v[i] = h+x;
        }

    }

        return 0;
}