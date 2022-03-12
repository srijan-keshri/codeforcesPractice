#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >> n>>m;
    int index = 1;
    while (1)
    {
        if(index>n){
            index = index - n;
        }
        int temp =   index;
        if(temp>m){
            break;
        }
        else{
            m -= temp;
            index++;
        }
    }
    cout << m;
    return 0;
}