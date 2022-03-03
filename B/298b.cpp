#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, s1, s2, e1, e2;
    cin >> t >> s1 >> s2 >> e1 >> e2;
    vector<char> v(t);
    for (int i = 0; i < t;i++){
        cin >> v[i];
    }
    int difx = e1 - s1;
    int dify = e2 - s2;
    int travelx = 0;
    int travely = 0;
    int time = 0;
    for (int i = 0; i < t; i++)

    {
         if(dify==travely && difx==travelx){
             break;
         }
        ++time;
        if (v[i] == 'E')
        {
            if((difx>0 && travelx!=difx)){
                ++travelx;
            }
        }
        else if (v[i] == 'W')
        {
            if(difx<0 && travelx!=difx){
                --travelx;
            }
        }
        else if(v[i]=='N'){
            if(dify>0 && travely!=dify){
                ++travely;
            }
        }else{
if(dify<0 && travely!=dify){
    --travely;
}
        }
    }
    if(dify==travely && difx==travelx){
        cout << time;
    }
    else{
        cout << "-1" << endl;
    }
}