#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, l;
    cin >> n >> l;
    vector<double> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    double d=0;
    
    for (int i = 0; i < n - 1; i++)
    {
        double temp = v[i + 1] - v[i];
        d = max(d, (temp / 2.0));
    }
    double temp = v[0]-0.0;
    d = max(d,temp);
    temp = l - v[n - 1];
    d = max(d, temp);
    //cout << d << endl;
    cout<<setprecision(9)<<d<<endl;

    return 0;
}