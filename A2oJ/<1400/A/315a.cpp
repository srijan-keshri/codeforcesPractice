#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    int count = 0;
    vector<int> bb;
    vector<int> aa;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        

        v.push_back({a, b});
        bb.push_back(b);
        bb.push_back(a);
    }
    //cout<<aa.size();
    //cout<<v.size();
    int alpha=0;
    for(int i=0;i<n;i++){
      

      int temp=v[i].first;
      int flag=0;
      for(int j=0;j<n;j++){
        if(i==j)continue;
        if(v[j].second==temp){
          ++alpha;
          //cout<<i<<" "<<j<<endl;
          flag=1;
          break;
        }
      }
      if(flag){

      }
      else{
        // cout<<"I"<<i<<endl;

        ++count;
      }
    }
    // cout<<alpha<<endl;
    cout<<count;
    return 0;
}