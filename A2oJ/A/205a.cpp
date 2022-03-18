#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int ans = v[0];
    int mini=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]<ans){
            ans = v[i];
            mini = i;
        }
    }
    int flag = 0;
   // cout << mini;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==ans && mini!=i){
            //cout << i;
            flag = 1;
            break;
        }
    }
   // cout << mini;
    if (flag)
    {
        cout << "Still Rozdil";
    }
    else{
        cout << mini+1;
    }
    return 0;
}