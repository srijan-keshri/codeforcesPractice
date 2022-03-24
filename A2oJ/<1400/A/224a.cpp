#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int a, b, c;
    cin >> a >> b >> c;
     int  temp = a * b * c;
    temp = pow(temp, 0.5);
     int  x, y, z;
    z = temp / a;
    y = temp / b;
    x = temp / c;
     int  ans = x + y + z;
    cout << 4 * ans;
}