#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans=0;
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        ++mp[s[i]];
    }
    multiset<int> st;

    for (auto x : mp)
    {
        st.insert(x.second);
        //cout<<x.second<<" ";
    }
    while(k>0){
       // cout<<k<<endl;
        auto x = st.lower_bound(k);
       // cout<<*x<<endl;
        if(x==st.end()){
            //cout<<k<<endl;
            --x;
            //cout<<*x<<"hey"<<endl;

            ans += pow(*x, 2);
            k -= *x;
            st.erase(x);
            //cout<<k<<endl;
        }
        else {
            int temp=*x;
           // cout<<temp<<endl;
            if(k<=temp){
                //cout<<k<<endl;
                ans+=k*k;
                k=0;
            }
            else{
                ans += (temp * temp);
            k = k-temp;
            }
            
             st.erase(x);
        }
        
    }
    //int ans = 0;
    
    cout << ans;
    return 0;
}