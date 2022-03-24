#include<bits/stdc++.h>
using namespace std;
int main(){
    int r, c;
    cin >> r >> c;
    vector<vector<char> > v(r);
    char temp;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c;j++){
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    int ans = 0;
    int n = r;
    int m = c;
    vector<vector<int> > a(r, vector<int>(c, 1));
    for (int i = 0; i < r; i++)
    {
        int count = 0;
        int flag = 0;
        for (int j = 0; j < c; j++)
        {
            if(v[i][j]=='S'){
                flag = 1;
                break;
            }
            else{
                count += a[i][j];
            }
        }
        if(!flag){
            for (int j = 0; j < c;j++){
                a[i][j] = 0;
            }
            ans += count;
        }
    }
    for (int j = 0; j < c;j++){
        int count = 0;
        int flag = 0;
        for (int i = 0; i < r;i++){
            if(v[i][j]=='S'){
                flag = 1;
                break;
            }
            else{
                count += a[i][j];
            }

        }
        if(!flag){
            for (int i = 0; i < r;i++){
                a[i][j] = 0;
            }
            ans += count;
        }
    }
        cout << ans;
    return 0;
}