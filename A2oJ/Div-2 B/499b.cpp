#include<bits/stdc++.h>
using namespace std;
int main(){
   
        int n,m;
        cin >> n>>m;
        map<string, string> firstToSec,secToFirst;


        
        for (int i = 0; i < m;i++){
            string a, b;
            cin >> a >> b;
            firstToSec[a] = b;
            secToFirst[b] = a;
        }
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            string temp = firstToSec[a];
            if(a.length()<temp.length()){
                v.push_back(a);
            }
            else if(a.length()==temp.length()){
                v.push_back(a);
            }
            else{
                v.push_back(temp);
            }
        }
        for (int i = 0; i < n;i++){
            cout << v[i] << " ";
        }

            return 0;
}