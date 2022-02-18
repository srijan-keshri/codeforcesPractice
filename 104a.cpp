#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n>21){
        cout << "0" << endl;
        exit(0);
    }
    if(n==10){
        cout << "0" << endl;
        exit(0);
    }
    vector<pair<int, int> > v;
    for (int i = 1; i < 10;i++){
        v.push_back({i, 4});
    }
    
    v.push_back({10, 15});
    v.push_back({11, 4});
    if (n - 10 >= 0)
    {
        for (int i = 0; i < v.size();i++){
            if(n-10==v[i].first){
                cout << v[i].second << endl;
                exit(0);
            }
        }
    }
    else{
        cout << "0" << endl;
        exit(0);
    }
    return 0;
}