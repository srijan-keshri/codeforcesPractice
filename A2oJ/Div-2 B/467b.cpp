#include<bits/stdc++.h>
using namespace std;
int helper(int a,int b,int k){
    int temp = a ^ b;
   int x= __builtin_popcount(temp);
   if(x<=k)
       return 1;
   return 0;
}
int main(){
    #define int long long int
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    for (int i = 0; i < m + 1;i++){
        cin >> v[i];
    }
    int owner = v[m];
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        count+= helper(v[i], owner,k);
    }
    cout << count << endl;

    return 0;
}