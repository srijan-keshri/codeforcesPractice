#include<bits/stdc++.h>
using namespace std;

const int N=0;
int main(){
    int k;
    cin >> k;
    vector<int> v(12);
    for (int i = 0; i < 12;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i = 11;
    int count = 0;
    while (k>0 && i>=0){
        k -= v[i];
        --i;
        ++count;
    }
    if(k>0){
        cout << "-1";
    }
    else{
        cout << count;
    }
}