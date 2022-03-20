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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1;  i + j < 2 * n;j++){
                int temp = v[i] * v[j];
                int k = i + j+2;
                if (temp==k)
                {
                    ++count;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}