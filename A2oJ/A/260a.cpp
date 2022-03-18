#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int a, b, n;
    cin >> a >> b >> n;
    int count = 0;
    int f = 1;
    while (count < n)
    {
        a *= 10;
        int temp;
        int flag = 0;
        for (int j = 0; j < 10; j++)
        {
            temp = a + j;
            //cout<<temp<<endl;
            if(temp%b==0){
                flag = 1;
                break;
            }
        }
        if(flag){
a = temp;
        ++count;
        }
        else{
            f = 0;
            break;
        }
    }
    if (f==0){
        cout << "-1";
    }
    else{
            cout << a << endl;

    }
        return 0;
}