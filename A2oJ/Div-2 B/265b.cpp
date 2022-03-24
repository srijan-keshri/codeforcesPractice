#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int 
    int t=1;
    //cin >> t;
    while(t--){
        int n;
        cin >> n;
        int time = 0;

        vector<int> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }
        int height = 0;
        time += v[0] - height+1;
        height = v[0];
        for (int i = 1; i < n; i++){
            if(v[i]>height){
                time += v[i] - height+2;
                height = v[i];
            }
            else{
                time += height - v[i] + 2;
                height = v[i];
            }
        }
        cout << time << endl;
    }
    return 0;
}