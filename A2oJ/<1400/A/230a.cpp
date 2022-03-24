#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> p1,pair<int,int> p2){
    
     if(p1.first==p2.first){
        return p1.second > p2.second;
    }
    return p1.first < p2.first;
}
int main(){
    int s, n;
    cin >> s >> n;
    vector<pair<int, int> > v(n);
    for (int i = 0; i< n;i++){
        cin >> v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i].first<s){
            s += v[i].second;
        }
        else{
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "NO";
    }
    else{
        cout << "YES";
    }

        return 0;
}