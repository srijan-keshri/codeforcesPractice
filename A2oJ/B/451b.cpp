#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int flag = 1;
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if(v[i]>=v[i+1]){

        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "YES"<<endl;
        cout << "0" << " " << n - 1;
    }
    int flag2 = 1;
    int j = i;
    for (i; i < n - 1; i++)
    {
        if(v[i]<=v[i+1]){

        }
        else{
            flag2 = 0;
            break;
        }
    }
    if(flag2){
        
    }
        return 0;
}