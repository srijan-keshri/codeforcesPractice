#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int temp1 = a + b - c;
    int temp2 = b + c - a;
    int temp3 = c + a - b;

    if (temp1 % 2 == 0 && temp2 % 2 == 0 && temp3%2==0 && temp1>=0 && temp2>=0 && temp3>=0){
        cout << temp1 / 2 << " " << temp2 / 2 << " " << temp3 / 2 << endl;
    }
    else{
                cout << "Impossible";

    }
    return 0;
}