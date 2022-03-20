#include<bits/stdc++.h>
using namespace std;
// int gcd(int a,int b){
//     if(a==0)
//         return b;
//     if(b==0)
//         return a;
//     if(a>b){
//         return gcd(a - b, b);
//     }
//     return gcd(a, b - a);
// }
int main(){
    #define int long long int 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
                vector<int> ans;
                int even = 0;
                for (int i = 0; i < n; i++)
                {
                    cin >> v[i];
                    if (v[i] % 2 == 0)
                    {
                        ans.push_back(v[i]);
                        ++even;
                    }
                }
        for (int i = 0; i < n;i++){
            if(v[i]%2==1){
                ans.push_back(v[i]);
            }
        }
        int countAns = 0;
        int temp = ((even) * (even + 1)) / 2;
        countAns += (even)*n - temp;
        for (int i = even; i < n; i++)
        {

            for (int j = i + 1; j < n;j++){
                countAns += __gcd(ans[i], ans[j]) > 1;
            }
        }
        cout << countAns << endl;
    }
    return 0;
}