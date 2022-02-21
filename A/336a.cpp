#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int

    int x, y;
    cin >> x >> y;
    int x1, x2, y1, y2;
    if (x * y > 0)
    {
        x1 = x + y;
        y1 = 0;
        y2 = x1;
        x2 = 0;
        if(x1>x2){
            swap(x1, x2);
            swap(y1, y2);
        }
    }
    else
    {
        x1 = x - y;
        y1 = 0;
        y2 = (-1 * x1);
        x2 = 0;
        if(x1>x2){
            swap(x1, x2);
            swap(y1, y2);
        }
    }
    cout << x1 << " " << y1 << " " << x2 << " " << y2;
    return 0;
}