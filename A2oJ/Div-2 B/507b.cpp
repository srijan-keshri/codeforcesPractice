#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int r, x, y, a, b;
    cin >> r >> x >> y >> a >> b;
    int tempx, tempy;
    tempx = abs(a - x) / r;
    tempy = abs(b - y) / r;
    int step = max(tempx, tempy);
    cout << step - 1;

    return 0;
}