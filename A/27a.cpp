#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int i;
    sort(v.begin(), v.end());
    if(v[0]!=1){
        cout << "1";
        return 0;
        
    }
    for (i = 0; i < n-1;i++){
        if(v[i]+1==v[i+1]){

        }
        else{
            break;
        }
    }
    cout << v[i] + 1;
    return 0;
}