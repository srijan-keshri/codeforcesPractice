#include<bits/stdc++.h>
using namespace std;
int  helper(vector<vector<int>> v,int i,int j){
    //cout<<i<<" "<<j<<endl;
    int t = v[i][j];
    if(i+1<4 && j+1<4){
        int p = v[i + 1][j];
        int q = v[i + 1][j + 1];
        int r = v[i][j + 1];
        int sum = t + p + q + r;
        //cout<<sum<<endl;
        if(sum==3 || sum==1 || sum==0 || sum==4)
            return 1;
        return 0;
    }
    else {
        return 0;
    }
}
int main(){
    string t;
    vector<vector<int>> v(4, vector<int>(4));
    for (int i = 0; i < 4;i++){
        cin >> t;
        for (int j = 0; j < 4;j++){
            
            //cout<<t<<" ";
            if(t[j]=='#'){
                v[i][j]=1;
            }
            else{
                v[i][j]=0;
            }
           // cout<<v[i][j]<<" ";
                }
               // cout<<endl;
    }
    int x = v[0][0];
    int ff = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4;j++){
            if(v[i][j]!=x){
                ff = 0;
                break;
            }
        }
        if(ff==0)
            break;
    }
    if(ff){
        cout << "YES";
        exit(0);
    }

   int flag;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4;j++){
             flag = helper(v, i, j);
            
            if(flag==1){
               // cout<<flag<<endl;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
        return 0;
}