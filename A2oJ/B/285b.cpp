#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, s, t;
    cin >> n >> s >> t;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=v[i]-1;
    }
    if(s==t){
        cout << "0";
        return 0;
    }
    if(v[s-1]==s-1){
        cout << "-1";
        return 0;
    }
    int count = 1;
    int start = v[s-1];
    int end = t - 1;
    while (1)
    {
        if(start==end){
            break;
        }
        else if(start==s-1){
            cout << "-1";
            return 0;
        }
        ++count;
        start = v[start];
    }
    cout << count;
    return 0;
}