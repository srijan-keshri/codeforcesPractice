#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<int> x(50001,1);
    for (int i = 3; i < 50001;i+=3){
        x[i] = 0;
    }
    for (int i = 3; i < 5001;i+=10){
        x[i] = 0;
    }

        while (t--)
        {
            int k;
            cin >> k;
            int count = 0;
            int i = 1;
            int ans;
            while (count < k)
            {
                if(x[i]){
                    ++count;
                    ans = i;
                }
                else{
                   
                }
                ++i;
            }
            cout << ans << endl;
        }

    return 0;
}