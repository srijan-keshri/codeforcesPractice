#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int 
    int t=1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }
        vector<int> temp = v;
        int flag = 1;
        if(n==1){
            cout << "yes"<<endl;
            cout <<"1" << " " << "1";
            return 0;
        }
        for (int i = 0; i < n-1;i++){
            if(v[i]<v[i+1]){

            }
            else {
                flag = 0;
                break;
            }
        }
        if(flag){
            cout << "yes"<<endl;
            cout << "1" << " " << "1";
            return 0;
        }
        flag = 1;
         for (int i = 0; i < n-1;i++){
            if(v[i]>v[i+1]){

            }
            else {
                flag = 0;
                break;
            }
        }
        if(flag){
            
            cout << "yes" << endl;
            cout << "1" << " " << n;
            return 0;
        }
        int l, r;
        for (int i = 0; i < n - 1;i++){
            if(v[i]>v[i+1]){
                l = i;
                break;
            }
        }
        for (int i = n-2; i>=0 ;i--){
            if(v[i]<v[i+1]){
                
            }
            else{
                r = i;
                break;
            }

        }
        ++r;
        ++r;
        reverse(v.begin() + l, v.begin() + r);
        //vector<int> temp = v;
        sort(temp.begin(), temp.end());
       // --r;
        if (temp == v)
        {
            cout << "yes" << endl;
            cout << l+1 << " " << r;
        }
        else{
            cout << "no" << endl;
        }

    }
    return 0;
}