#include<bits/stdc++.h>
using namespace std;

int main(){
    #define int long long int
    int n;
    cin >> n;
    vector<int> v(n);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s += v[i];
    }
    int c = 0;
    for (int i = 1; i <= 5; i++)
    {
        int temp = ((s + i) % (n + 1));
        if(temp==1){
            ++c;
        }
    }
    cout << 5 - c;

    return 0;
}