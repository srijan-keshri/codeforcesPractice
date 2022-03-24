#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sum = 0;
    if (v[0] >= 0)
    {
        for (int i = 0; i < n;i++){
            sum += v[i];
        }
        if(k%2==0){

        }else{
            sum -= 2*v[0];
        }
    }
    else{
        for (int i = 0; i < n;i++){
            if( v[i+1]>0 && v[i]<0 && k>0){
                if(k%2==0){
                    int x1=abs(v[i]);
                    int x2=abs(v[i+1]);
                    if(x1<x2){
                        sum += v[i];
                    }
                    else{
                        sum+=x1;
                        sum-=x2;
                        i=i+1;
                        continue;
                    }
                }
                else{
                    sum -= v[i];
                }
                k = 0;
            }
            else if( v[i+1]==0 && v[i]<0){
                 if(k>0){
                     sum -= v[i];
                    --k;
                 }
                 else{
                     sum += v[i];
                 }
            }
            else{
                if(v[i]==0){
                    k = 0;
                }
                else if(v[i]<0 && k>0){
                    sum -= v[i];
                    --k;
                }
                else{
                    sum += v[i];
                }
            }
        }
    }
    cout << sum;
    return 0;
}