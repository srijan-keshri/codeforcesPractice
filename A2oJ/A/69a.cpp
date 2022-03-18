#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int> > v(n);
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        v[i].push_back(a);
        v[i].push_back(b);
        v[i].push_back(c);
    }
    int s1 = 0, s2 = 0, s3=0;
    for (int i = 0; i < n;i++){
        s1 += v[i][0];
        s2 += v[i][1];
        s3 += v[i][2];
    }
    if(s1==0 && s2==0 && s3==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
        return 0;
}