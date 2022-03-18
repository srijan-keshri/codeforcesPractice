#include<bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cin >> n;
    vector<float> v(n);
    float sum = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];

    }
    //float ans = (sum / ( n));
    printf("%f", (sum / (n)));
}