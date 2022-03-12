#include<bits/stdc++.h>
using namespace std;
vector<int> prime(1e6 + 5,1);

int main(){
    #define int  long int
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    for (int i = 2; i*i <= 1e6; i++)
    {
       if(prime[i]){
        for (int p = i*i; p  <= 1e6;p+=i){
            prime[p] = 0;
        }
       }
        
    }
   
    for (int i = 0; i < n;i++){
        int a = v[i];
        int b = sqrt(a);
        // cout << b << endl;

        if(a==1){
          cout<<"NO"<<endl;
        }

        // int c = b * b;
        else if (prime[b] && b*b==a)
        {
            cout << "YES"<<endl;
        }
       else{
           cout << "NO"<<endl;
       }
    }

        return 0;
}