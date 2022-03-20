#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int index;
        int ans = INT_MAX;
        for (int i = 0; i < n-1;i++){
            int dif = v[i + 1] - v[i];
            if(dif<ans){
                ans = dif;
                index = i;
            }
        }
        int no1 = v[index];
        int no2 = v[index + 1];
        v.erase(v.begin() + index,v.begin()+index+2);
        cout << no1 << " ";
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << no2<<endl;

    }
    return 0;
}