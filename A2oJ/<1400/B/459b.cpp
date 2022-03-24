#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int a = v[0];
    int b = v[v.size() - 1];
    int x = 0, y = 0;
    for (int i = 0; i < n;i++){
        if(v[i]==a){
            ++x;
        }
        else{
            break;
        }
    }
    for (int i = n - 1; i >= 0;i--){
        if(v[i]==b){
            ++y;
        }
        else{
            break;
        }
    }
    int temp = x * y;
    if(a==b){
        cout << b - a << " " << (n*(n-1))/2;
    }
    else{
cout << b - a << " " << x * y;
    }
    

    return 0;
}