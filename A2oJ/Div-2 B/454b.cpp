#include<bits/stdc++.h>
using namespace std;
int main(){
    //#define int long long int 
    int t=1;
    //cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        vector<int> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }
        vector<int> t = v;
        queue<int> q;
        for (int i = n - 1; i >= 0; i--)
        {
            q.push(v[i]);
        }
        //sorting in reverse order
        sort(t.begin(), t.end());
        reverse(t.begin(), t.end());
        // int count = 0;
        int first = t[0];// first element in the sorted array
        int last=t[n-1];
        while (1)
        {
            if(count>n)break;
            int p = q.front();
            int r=q.back();
            if(first==p && r==last){
                break;
            }
            q.pop();
            q.push(p);
            ++count;
        }
        vector<int> final;
        int size=q.size();
        for (int i = 0; i < size;i++){
            // cout<<q.front()<<" ";
            final.push_back(q.front());
            q.pop();

        }
        if(t==final){
            cout << count << endl;
        }
        else{
            cout << "-1";
        }
    }
    return 0;
}