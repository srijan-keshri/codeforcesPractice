#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int flag = 1;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n;i++){
        if(v[i]==25){
            ++a;
        }
        else if(v[i]==50){
            if(a>0){
                --a;
                ++b;
            }
            else{
                cout << "NO";
                flag = 0;
                break;
            }
        }
        else if(v[i]==100){
            if(b>0 && a>0){
                --a;
                --b;
                ++c;
            }
            else if(a>2){
                a = a - 3;
                ++c;
            }
            else{
                flag = 0;
                cout << "NO";
                break;
            }
        }
    }
    if(flag){
        cout << "YES";
    }
}