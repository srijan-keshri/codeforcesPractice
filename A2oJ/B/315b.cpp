#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int sumy = 0;
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        if(t==3){
            int q;
            cin >> q;
            cout << v[q - 1]+sumy<<endl;
        }
        else if(t==2){
            int y;
            cin >> y;
            sumy += y;
        }
        else {
            int vt, x;
            cin >> vt >> x;
            v[vt - 1] = x-sumy;
        }
    }
        return 0;
}