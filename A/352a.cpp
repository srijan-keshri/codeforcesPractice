#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a=0, b=0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp==0){
            ++a;
        }
        else{
            ++b;
        }
    }
    if(b<9 || a<1){
        cout << 0;
        exit(0);
    }
    b = b / 9;
    b = b * 9;
    string ans = "";
    for (int i = 0; i < b; i++){
        ans += "5";
    }
    for (int i = 0; i < a;i++){
        ans += "0";

    }
    cout << ans;
    return 0;
}