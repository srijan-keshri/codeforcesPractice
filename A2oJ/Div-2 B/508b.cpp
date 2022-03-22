#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    int temp = n;
    vector<int> v;
    int countEven = 0;
    while (temp > 0)
    {
        v.push_back(temp % 10);
        if((temp%10)%2==0){
            ++countEven;
        }
        temp = temp / 10;
    }
    //sort(v.begin(), v.end());
    if (countEven == 0)
    {
        cout << "-1";
        return 0;
    }
    reverse(v.begin(), v.end());
    int index1,index2;
    for (int i = v.size()-1; i >=0;i--){
        if(v[i]%2==0){
            index1 = i;
            break;
        }
    }
    for (int i =0; i <n;i++){
        if(v[i]%2==0){
            index2 = i;
            break;
        }
    }
    int index;
    if(v[index1]<v[index2]){
        index = index1;
    }
    else{
        index = index2;
    }
        swap(v[index], v[v.size()-1]);

    for (int i = 0; i < v.size();i++){
        cout << v[i];
    }
        return 0;
}