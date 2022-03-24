#include<bits/stdc++.h>
using namespace std;
#define int long long int 
void helper(vector<vector<int>> &ans,int n,int m,int row0,int col0){
    for (int j = 0; j < n;j++){
        ans[row0][j] = 0;
    }
    for (int i = 0; i < m;i++){
        ans[i][col0] = 0;
        //cout<<i<<" "<<col0<<endl;
    }
}
void printAns(vector<vector<int>> ans,int m,int n){
    for (int i = 0; i < m;i++){
            for (int j = 0; j < n;j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
}
void calculatMatrix(vector<vector<int>> &ans,int m,int n,vector<vector<int>> v){
    for (int i = 0; i < m;i++){
            int col0;
           
            int row0;
            for (int j = 0; j < n; j++)
            {
                
                if(v[i][j]==0){
                    // cout<<i<<" "<<j<<endl;
                    col0 = j;
                    row0 = i;
                    
                    helper(ans, n, m, row0, col0);
                }
            }
            
        }
}

int32_t main(){
    int t=1;
    //cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        vector<vector<int>> v(m),ans(m,vector<int>(n,1)),b(m,vector<int>(n,0));

        for (int i = 0; i < m;i++){
            for (int j = 0; j < n;j++){
                int temp;
                cin >> temp;
                v[i].push_back(temp);
            }
        }
        calculatMatrix(ans, m, n, v);
        for (int i = 0; i < m;i++){
            int temp = 0;
            for (int j = 0; j < n; j++)
            {
                temp = temp || ans[i][j];
                
            }
            for (int j = 0; j < n;j++){
                b[i][j] = temp || ans[i][j];
            }
        }
        // cout<<"printingafterfirstitteration"<<endl;
        // printAns(b,m,n);
        for (int j = 0; j < n;j++){
            int temp = 0;
            for (int i = 0; i < m;i++){
                 temp = temp || ans[i][j];
                
            }
            for (int i = 0; i < m;i++){
                b[i][j] = temp || b[i][j];
            }
        }
        if(b==v){
            cout << "YES"<<endl;
            printAns(ans, m, n);


        }
        else{
            // cout<<"printingv"<<endl;
            // for(int i=0;i<m;i++){
            //     for(int j=0;j<n;j++){
            //         cout<<v[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }
            // cout<<"printingB"<<endl;
            // for(int i=0;i<m;i++){
            //     for(int j=0;j<n;j++){
            //         cout<<b[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }
            // cout<<"Printing ans"<<endl;
            // printAns(ans, m, n);



            cout << "NO";
        }
    }
    return 0;
}