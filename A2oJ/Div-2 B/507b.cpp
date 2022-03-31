#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int r, x, y, a, b;
    cin >> r >> x >> y >> a >> b;
    int rr = pow(b-y, 2) + pow(a-x, 2);

    float step = (float)sqrt(rr);
    
    cout<<ceil(step/((2.0)*r))<<endl;    


    return 0;
}

