#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n>>m;
    vector<int> v1(n);
    vector<int> v2(m);
    for (int i = 0; i < n;i++){
        cin >> v1[i];
    }
    for (int i = 0; i < m;i++){
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if(v1[n-1]<v2[0] && 2*v1[0]<v2[0]){
        if(2*v1[0]<=v1[n-1]){
            cout << v1[n - 1] << endl;
        }
        else{
            int i = v1[n-1] ;
            int flag = 0;
            for (; i < v2[0];i++){
                if(2*v1[0]<=i){
                    flag = 1;
                    break;
                }
            }
            if(flag){
                cout << i << endl;
            }
            else{
                cout << "-1" << endl;
            }
        }
    }
    else{
        cout << "-1" << endl;
    }
}