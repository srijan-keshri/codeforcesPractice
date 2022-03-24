#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i].first >> v[i].second;
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n;i++){
        sum1 += v[i].first;
        sum2 += v[i].second;
    }
    if(sum1%2==0 && sum2%2==0){
        cout << "0" << endl;
    }
    else if(sum1%2==0 ){
        cout << "-1";
    }
    else if (sum2 % 2 == 0)
    {
        cout << "-1";
    }
    else
    {
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            auto a = v[i].first;
            auto b = v[i].second;
            if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
                cout << "1";

                return 0;
            }
        }
        cout << "-1";
    }
}