#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    while (n > 0)
    {

        for (int i = 0; i < 7;i++){
            //cout << n << endl;
            if (n>v[i])
            {
                n -= v[i];
            }
            else{
                cout << i + 1;
                exit(0);
            }
        }
    }

        return 0;
}