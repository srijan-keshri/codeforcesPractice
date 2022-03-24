#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }
    for (int i = 0; i < n;i++){
            int a = 0;
            int b = 0;
            int c = 0;
            int d = 0;
            int p = v[i].first;
            int q = v[i].second;

            for (int j = 0; j < n; j++)

            {
                if(i==j)continue;
                int x = v[j].first;
                int y = v[j].second;
                if(x>p && y==q){
                    ++a;
                }
                else if(x<p &&y==q){
                    ++b;
                }
                else if(x==p && y>q){
                    ++c;
                }
                else if(x==p && y<q){
                    ++d;
                }
        }
        if(a>0 && b>0 && c>0 && d>0){
            //cout<<i<<" ";
            ++ans;
        }
    }
    cout << ans;
}