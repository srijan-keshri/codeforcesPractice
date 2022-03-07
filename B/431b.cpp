#include<bits/stdc++.h>
using namespace std;
int calculateHapiness(vector<vector<int>> v,vector<int> students){
    vector<int> temp = students;
    int hapiness = 0;
    
    while (temp.size() > 0)
    {
        for (int i = 0; i < temp.size();i+=2){
            
            if(i<temp.size()-1){
int a = temp[i]-1;
int b = temp[i + 1]-1;

hapiness += v[a][b];
hapiness += v[b][a];
            }
        }
        vector<int> temp2;
        for (int i = 1; i < temp.size();i++){
            temp2.push_back(temp[i]);
        }
        temp.clear();
        temp = temp2;
    }
    return hapiness;
}
int main(){
    //
    //cout<<"hii";
    vector<vector<int>> v(5,vector<int>(5));

    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5;j++){
            cin >> v[i][j];
           
        }
    }
    int ans = 0;
    
    vector<int> students = {
        1,
        2,
        3,
        4,
        5};
    do
    {

        int temp=calculateHapiness(v, students);
       // cerr<<"I am here";
        ans = max(ans, temp);

    }
    while (next_permutation(students.begin(),students.end()))
        ;
    cout << ans;
    return 0;

}
