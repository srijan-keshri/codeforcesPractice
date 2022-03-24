#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int 
    int t=1;
    //cin >> t;
    while(t--){
        vector<vector<int>> v(3);
        for (int i = 0; i < 3;i++){
            for(int j=0;j<3;j++){
                int temp;
            cin >> temp;
            v[i].push_back(temp);
            }
        }
                //cerr<<"HII";

        int sum1 = 0, sum2 = 0, sum3 = 0;
        for (int i = 0; i < 3;i++){
            int sum = 0;
            for (int j = 0; j < 3;j++){
                sum += v[i][j];
            }
            if(i==0){
                sum1 = sum;
            }
            else if(i==1){
                sum2 = sum;
            }
            else{
                sum3 = sum;
            }
        }
        int totalSum = sum1 + sum2 + sum3;
        totalSum = totalSum / 2;
        int x = totalSum - sum1;
        int y = totalSum - sum2;
        int z = totalSum - sum3;
        v[0][0] = x;
        v[1][1] = y;
        v[2][2] = z;
        for (int i = 0; i < 3;i++){
            for (int j = 0; j < 3;j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}