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
int calScore(int i,int n){
    if(i<n/2){
        return i;
    }
    return abs(n - i-1);
}
void solve(){
    string s;
    cin >> s;
    vector<int> v1, v2;
    int n = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='4'){
            v1.push_back(i);
        }else if(s[i]=='7'){
            v2.push_back(i);
        }
    }
    // cout<<v1.size()<<endl;
    if(v1.size()==0 && v2.size()==0){
        cout << "-1" << endl;
        return;
    }
    int i = 0, j = 0;
    int ans = -1;
    //cout<<v2.size()<<endl;
    int score = -1;
    while (i < v1.size() && j < v2.size())
    {
        if(calScore(i,n)==calScore(j,n)){
            int tempScore = calScore(i,n);
            if(tempScore>=score){
                ans = v1[i];
                score = tempScore;
            }
            ++j;
        }
        else if(calScore(i,n)>calScore(j,n)){
            int tempScore = calScore(i,n);
            if(tempScore>=score){
                ans = v1[i];
                score = tempScore;
            }
            ++j;
        }
        else {
            int tempScore = calScore(j,n);
            if(tempScore>score){
                ans = v2[j];
                score = tempScore;
            }
            ++i;

        }
        //cout<<"ans"<<endl;
    }
    while(i<v1.size()){
        int tempScore = calScore(i,n);
            if(tempScore>score){
                ans = v1[i];
                score = tempScore;
            }
            // cout<<score<<" "<<ans<<endl;

            ++i;
    }
    while(j<v2.size()){
        int tempScore = calScore(j,n);
            if(tempScore>score){
                ans = v2[j];
                score = tempScore;
        }
        ++j;
    }
    // if(ans==-1){
    // 	cout<<"-1"<<endl;
    // 	return ;
    // }
    cout << s[ans] << endl;
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