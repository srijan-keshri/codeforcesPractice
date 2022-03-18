#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> ans;
    int sumOf=1;
    int temp0=0;
    int temp1=1;
    int temp2=pow(2,a);
    int temp3=pow(3,a);
    //int temp4=pow(4,a);
    int temp4=pow(4,a);
    int temp5=pow(5,a);    int temp6=pow(6,a);    int temp7=pow(7,a);
        int temp8=pow(8,a);
            int temp9=pow(9,a);






            int xx=1e9;
            cout<<xx<<endl;
    for (int i = 1; i < 1e9; i++)
    {
        if(sumOf==10){
            sumOf = 1;
        }
        if((i-c)%b==0){

        }
        else {
            continue;
        }
        int temp = (i - c) / b;
        cout<<temp<<endl;
        int x;
        if(sumOf==0){
            x = temp0;
        }else if(sumOf==1){
            x = temp1;
        }
        else if(sumOf==2){
            x = temp2;
        }else if(sumOf==3){
            x = temp3;
        }
        else if(sumOf==4){
            x == temp4;
        }
        else if(sumOf==5){
            x = temp5;
        }
        else if(sumOf==6){
            x = temp6;
        }else if(sumOf==7){
            x = temp7;
        }else if(sumOf==8){
            x = temp8;
        }
        else if(sumOf==9){
            x = temp9;
        }
       if(temp==x){
           ans.push_back(i);
       }
       //cout<<sumOf<<endl;
        ++sumOf;
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
    }
        return 0;
}