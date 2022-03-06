#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = 0, b = 0;
    for (int i = 0; i < n;i++){
        int temp;
        cin >> temp;
        if(temp==100){
            ++a;
        }
        else{
            ++b;
        }
    }
    int flag = 0;
    for (int x = 0; x <= a; x++)
    {
        int temp = a - 2 * b - 2 * x;
        if(temp%4==0){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}