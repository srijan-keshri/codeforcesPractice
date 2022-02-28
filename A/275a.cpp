#include<bits/stdc++.h>
using namespace std;
void toggle(vector<vector<int>> &ans,int i,int j){
    if(i<0 || j<0 || i>2 || j>2){
        return;
    }
    ans[i][j] = 1 - ans[i][j];
}
int main() {
    vector<vector<int>> v(3);
    int temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++){
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    vector<vector<int>> ans(3, vector<int>(3, 1));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++){
            if(ans[i][j]%2==0){

            }
            else{
                toggle(ans, i, j);
                toggle(ans, i, j + 1);
                toggle(ans, i, j - 1);
                toggle(ans, i - 1, j);
                toggle(ans, i + 1, j);
            }
        }}

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}