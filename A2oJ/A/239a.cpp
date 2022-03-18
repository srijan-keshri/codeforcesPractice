#include <iostream>
using namespace std;
 
// void init_code(){
// 	#ifndef ONLINE_JUDGE
	
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
	
// 	#endif
// }
int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int y, k, n;
    cin >> y >> k >> n;
    if(y<=n-1){
        int pp;
        int flag = 0;
        for (int i = k; i <= n; i += k)
        {
            if(i<=n){
                if(i-y>0){
cout << i-y << " ";
                flag = 1;
                }
                
            }
        }
        if(flag){

        }
        else{
            cout << "-1";
        }
    }

    else{
        cout << "-1";
    }
}