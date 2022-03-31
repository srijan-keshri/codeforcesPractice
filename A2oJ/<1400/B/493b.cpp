#include<bits/stdc++.h>
using namespace std;


#define int             long long int 
#define F               first
#define S               second
#define pb              push_back
#define double          long double
#define print(a)        for(auto x:a)cout<<x<<" "; cout<<endl
#define print1(a)       for(auto x:a)cout<<x.F<<" "<<x.S<<endl
#define all(p)          p.begin(),p.end()
void solve(){
    int n;
        cin >> n;
        vector<int> v1,v2;
        int sum1 = 0,sum2=0;
        int last;//1 +ve -1 -ve
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

           if(temp>0){
               v1.push_back(temp);
           }
           else{
               v2.push_back(abs(temp));
           }
           if(i==n-1){
               if(temp>0){
                   last = 1;
               }
               else{
                   last = -1;
               }
           }

        }

        for (int i = 0; i < v1.size();i++){
            sum1 += v1[i];
        }
        for (int i = 0; i < v2.size();i++){
            sum2 += v2[i];
        }
        if(sum2>sum1){
            cout << "second" << endl;
        }
        else if(sum1>sum2){
            cout << "first" << endl;
        }
        else{
            int c1 = 0, c2 = 0;
            for (int i = 0; i < v1.size()-1;i++){
                if(v1[i]<v1[i+1])
                    ++c1;
            }
            for (int i = 0; i < v2.size()-1;i++){
                if(v2[i]<v2[i+1])
                    ++c2;
            }
            if(c2>c1){
            cout << "second" << endl;
        }
        else if(c1>c2){
            cout << "first" << endl;
        }
        else{
            if(last==1){
                cout << "first" << endl;
            }else{
                cout << "second" << endl;
            }
        }
        }
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--)
        solve();

    return 0;
}