#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<string > > v(2*n+1,vector<string>(2*n+1));
    for (int i = 0; i <=  n; i++)
    {
        int flag = 0;
        for (int j = 0; j <=   n; j++)
        {
            if(j<n-i){
                v[i][j] = " ";
            }
            else if(i+j==n){
                v[i][j] = "0";
            }
            else{

                v[i][j] = to_string(i + j - n);
            }
        }
        vector<string> tt = v[i];
        int k = n-1;
        for (int j = n + 1; j <= 2 * n; j++)
        {
            v[i][j] = tt[k];
            --k;
        }
    }
    vector<vector<string> > pp = v;
    int ll = n-1;
    for (int i = n + 1; i <= 2 * n; i++)
    {
        v[i] = pp[ll];
        --ll;
    }
        for (int i = 0; i < v.size(); i++)
        {
            int flag = 0;
            for (int j = 0; j < v[i].size(); j++)
            {
                if (flag == 1 && v[i][j]==" "){
                    break;
                }
                    if (v[i][j] == " " && flag == 0)
                    {
                        if(v[i][j]=="0" && v[i][j+1]==" "){
                            cout << v[i][j];
                        }
                        else{
                            cout << v[i][j] << " ";
                        }
                    }
                    else{
                    flag = 1;
                    if(j==v[i].size()-1){
                        cout << v[i][j];
                    }
                    else{
                         if(v[i][j]=="0" && v[i][j+1]==" "){
                            cout << v[i][j];
                        }
                        else{
                            cout << v[i][j] << " ";
                        }
                    }
                }
            }
            cout << endl;
        }
        return 0;
}