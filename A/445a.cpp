#include<bits/stdc++.h>
using namespace std;
void helper(int i,int j,int n,int m,vector<vector<char>> &v,int flag){
    if(i<0 || j<0 || i>n-1 || j>m-1 || v[i][j]!='.' )
        return;
    if (flag == 0)
    {
        v[i][j] = 'W';
    }

    else{
        v[i][j] = 'B';
    }
    flag = 1 - flag;
    helper(i + 1, j, n, m, v, flag);
    helper(i - 1, j, n, m, v, flag);
    helper(i , j-1, n, m, v, flag);
     helper(i , j+1, n, m, v, flag);

}
int main(){
    int m, n;
    cin >> n >> m;
    char temp;
    vector<vector<char>> v(n);
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
           if(v[i][j]=='.'){
              // cout << v[i][j] << " " << i << " " << j<<endl;
               helper(i, j, n, m, v, 0);
           }
        }
       
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cout << v[i][j];
        }
        cout << endl;
    }
}