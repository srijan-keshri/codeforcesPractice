#include<bits/stdc++.h>
using namespace std;
void helper(vector<vector<char>> &v,int i,int j,int n,int m,int &count){
    if(i<0 || j<0|| i>=n || j>=m || v[i][j]=='.')
        return;

    if(v[i][j]=='W'){
        ++count;
        v[i][j] = '.';
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m;j++){
            char temp;
            cin>>temp;
            v[i].push_back(temp);
        }
    }
    //cerr<<"HII";
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(v[i][j]=='P'){
                helper(v, i + 1, j, n, m, count);
                helper(v, i - 1, j, n, m, count);
                helper(v, i , j+1, n, m, count);
                helper(v, i , j-1, n, m, count);



            }
        }
    }
    cout << count << endl;
    return 0;
}