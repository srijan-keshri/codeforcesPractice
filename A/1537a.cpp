#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        int k = n;
        int count = 0;
        
        
            if(k>sum){
                sum += (k + 1 - sum);
                ++count;
            }
            else{
                //k<sum
                //cout<<"hii";
                
                count += sum - k;
                k += sum - k;
                //cout<<"sum"<<k<<endl;
            }
        
        cout << count << endl;
        
    }
    return 0;
}