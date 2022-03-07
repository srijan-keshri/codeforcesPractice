#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n, k;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i;j++){
            int temp = i * i - j * j;
            int k = pow(temp, 0.5);
            if(k*k==temp && k<=j && k!=0){
               // cout<<i<<" "<<j<<" "<<k<<endl;
                ++count;
            }
        }
    }
    cout << count;
}