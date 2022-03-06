#include<bits/stdc++.h>
using namespace std;
int isEqual(vector<int> v){
    int flag = 1;
    for (int i = 0; i < v.size() - 1; i++)
    {
        //cout<<flag<<endl;
        //cout<<v[i];
        if(v[i]==v[i+1]){

        }
        else{
            flag = 0;
            break;
        }
    }
    //cout<<flag;
    return flag;
}
int main(){
    // #define int long long int
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        //cout<<v[i];
    }
    if(isEqual(v)){
        cout << "0";

    }
    else{
        int flag = 1;
        //cout<<"I am here";
        for (int i = k - 1; i < n-1; i++)
        {
            //cout<<v[i]<<endl;
            if(v[i]==v[i+1]){

            }
            else{
                 cout << "-1";
                 return 0;
            }
        }
        for (int i = k - 1; i >= 0;i--){
            if(v[i]!=v[i-1]){
                cout << i;
                return 0;
            }
        }
    }
}